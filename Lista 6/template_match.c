#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int ** alocarMatriz_i(int linhas, int colunas){
    int i;

    int **array = (int**)malloc(linhas*sizeof(int*)); //aloca um vetor de ponteiros
    for (i = 0; i < linhas; i++){
        array[i] = (int*)malloc(colunas*sizeof(int)); //aloca um vetor para cada vetor(matriz)
    }

    return array;
}

double ** alocarMatriz_lf(int linhas, int colunas){
    int i;

    double **array = (double**)malloc(linhas*sizeof(double*)); 
    for (i = 0; i < linhas; i++){
        array[i] = (double*)malloc(colunas*sizeof(double)); 
    }

    return array;
}

int ** imgToArray(char * arquivo, int * linhas, int * colunas){
    FILE *fp;
    int i, j, r, g, b;
    int **array;
    int magic_number;
    char buffer;

    fp = fopen(arquivo,"r");

    fscanf(fp,"%*c %d", &magic_number);
    fseek(fp, 41, SEEK_SET); //vai pular a 2ª linhas do arquivo
    fscanf(fp,"%d %d", colunas, linhas);
    fscanf(fp, "%*d"); //vai pular o 1º numero, que indica o valor da cor maxima

    array = alocarMatriz_i(*linhas, *colunas);

    if (magic_number == 2){
        for(i = 0; i < *linhas; i++){
            for(j = 0; j < *colunas; j++){
                fscanf(fp, "%d", &array[i][j]);
            }
        }
    } 
    if (magic_number == 3){
        for(i = 0; i < *linhas; i++){
            for(j = 0; j < *colunas; j++){
                fscanf(fp, "%d %d %d", &r, &g, &b);
                array[i][j] = (r+g+b)/3;
            }
        }
    }
    fclose(fp);

    return array;
}

double ** Distance(int linhas_img, int colunas_img, int *imagem[colunas_img], int linhas_tmpl, int colunas_tmpl, int *template[colunas_tmpl], int * x, int * y){
    int i, j, k, l, row, col;
    double menor_distancia, maior_distancia = 0;
    double **distancia = alocarMatriz_lf(linhas_img - linhas_tmpl + 1, colunas_img - colunas_tmpl + 1);

    for(i = 0; i < linhas_img - linhas_tmpl; i++){
        for(j = 0; j < colunas_img - colunas_tmpl; j++){
            for(k = 0; k < linhas_tmpl; k++){
                for(l = 0; l < colunas_tmpl; l++){
                    distancia[i][j] += abs(imagem[k+i][l+j] - template[k][l]);
                }
            }
            //printf("%lf", distancia);

            if(i == 0 && j == 0){
                menor_distancia = distancia[0][0];
                row = i;
                col = j;
            }
            
            if (distancia[i][j] < menor_distancia){
                menor_distancia = distancia[i][j];
                row = i;
                col = j;
            }

            if(distancia[i][j] > maior_distancia){
                maior_distancia = distancia[i][j];
            }
        }
    }
    *x = row;
    *y = col;

    printf("Template found at row=%d, col=%d. Difference=%lf\n", row, col, menor_distancia);

    //normalizar array de distancia
    for(i = 0; i < linhas_img - linhas_tmpl; i++){
        for(j = 0; j < colunas_img - colunas_tmpl; j++){
            distancia[i][j] /= maior_distancia;
            distancia[i][j] *= 255;
        }
    }

    return distancia;
}

void arrayToImg_lf(char * arquivo, int linhas, int colunas, double *distancia[colunas]){
    int i, j;
    FILE *fp;

    fp = fopen(arquivo, "w");
    fprintf(fp, "P2\n");
    fprintf(fp, "#Created By Gustavo\n");
    fprintf(fp, "%d %d\n", colunas, linhas);
    fprintf(fp, "255\n");

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            fprintf(fp, "%.0lf ", distancia[i][j]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);
}

void arrayToImg_i(char * arquivo, int linhas, int colunas, int *distancia[colunas]){
    int i, j;
    FILE *fp;

    fp = fopen(arquivo, "w");
    fprintf(fp, "P2\n");
    fprintf(fp, "#Created By Gustavo\n");
    fprintf(fp, "%d %d\n", colunas, linhas);
    fprintf(fp, "255\n");

    for(i = 0; i < linhas; i++){
        for(j = 0; j < colunas; j++){
            fprintf(fp, "%d ", distancia[i][j]);
        }
        fprintf(fp, "\n");
    }

    fclose(fp);
}

void quadro(int linhas_img, int colunas_img, int linhas_tmpl, int colunas_tmpl, int x, int y, int *imagem[colunas_img]){
    int i, j;
    
    for (i = 0; i < linhas_img; i++){
        for(j = 0; j < colunas_img; j++){
            if(!(i >= x && i <= x + linhas_tmpl && j >= y && j <= y + colunas_tmpl)){
                imagem[i][j] -= 128;
            }
            if(imagem[i][j] < 0){
                imagem[i][j] = 0;
            }
        }
    }

}

int main(int qnt_arg, char **imagens){
    int i, j, x, y;
    int **imagem, **template, linhas_img, colunas_img, linhas_tmpl, colunas_tmpl;
    double **distancia;

    imagem = imgToArray(imagens[1], &linhas_img, &colunas_img);
    template = imgToArray(imagens[2], &linhas_tmpl, &colunas_tmpl);

    distancia = Distance(linhas_img, colunas_img, imagem, linhas_tmpl, colunas_tmpl, template, &x, &y);

    if(qnt_arg > 3){
        arrayToImg_lf(imagens[3], linhas_img - linhas_tmpl + 1, colunas_img - colunas_tmpl + 1, distancia);
    }

    if(qnt_arg > 4){
        quadro(linhas_img, colunas_img, linhas_tmpl, colunas_tmpl, x, y, imagem);
        arrayToImg_i(imagens[4], linhas_img, colunas_img, imagem);
    }

    free(imagem);
    free(template);
    free(distancia);

    return 0;
}