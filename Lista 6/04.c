#include <stdio.h>

typedef struct {
    int indice, idioma, genero, ano, duracao;
    char titulo[100];
    double orcamento;
}filme;

int main(){
    FILE *fp;
    filme filmes[4];
    double orcamento;
    char titulo[100], temp;
    int i, indice, linhas;
    
    while(1){
        fp = fopen("locadora.dat", "r+");

        linhas = 0;
        while(!feof(fp)){
                temp = fgetc(fp);
            if(temp == '\n'){
                linhas++;
            }
        }
        rewind(fp);

        for (i = 0; i < linhas;i++){
            fscanf(fp, "%d %s %lf %d %d %d %d", &filmes[i].indice, filmes[i].titulo, &filmes[i].orcamento, &filmes[i].idioma, &filmes[i].genero, &filmes[i].ano, &filmes[i].duracao);
            printf("%d %s %.0lf %d %d %d %d\n", filmes[i].indice, filmes[i].titulo, filmes[i].orcamento, filmes[i].idioma, filmes[i].genero, filmes[i].ano, filmes[i].duracao);
        }

        scanf("%d", &indice);
        fclose(fp);
        remove("locadora.dat");
        if(indice >= 1){
            fp = fopen("locadora.dat", "w");

            for(i = 0; i < linhas; i++){
                if (indice != filmes[i].indice){
                    fprintf(fp, "%d %s %.0lf %d %d %d %d\n", filmes[i].indice, filmes[i].titulo, filmes[i].orcamento, filmes[i].idioma, filmes[i].genero, filmes[i].ano, filmes[i].duracao);
                    //printf("%d %s %.0lf %d %d %d %d\n", filmes[i].indice, filmes[i].titulo, filmes[i].orcamento, filmes[i].idioma, filmes[i].genero, filmes[i].ano, filmes[i].duracao);
                }
            }

            fclose(fp);
        }else{
            break;
        }
    }
    return 0;
}
