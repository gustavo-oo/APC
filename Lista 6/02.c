#include <stdio.h>

typedef struct {
    int indice, idioma, genero, ano, duracao;
    char titulo[100];
    double orcamento;
}filme;

int Filtro(double valor, double filme_valor, int criterio){
    int filtro = 0;
    switch(criterio){
        case 0:
            filtro++;
        break;

        case 1:
            if (valor > filme_valor){
                filtro++;
            }
        break;

        case 2:
            if (valor < filme_valor){
                filtro++;
            }
        break;

        case 3:
            if (valor == filme_valor){
                filtro++;
            }
        break;

        case 4:
            if (valor != filme_valor){
                filtro++;
            }
        break;
    }
    return filtro;
}

int main(){
    FILE *fp;
    filme filmes[4];
    double orcamento;
    int i, ano, idioma, duracao, comp_ano, comp_idioma, comp_duracao, comp_orcamento, filtro, temp;

    fp = fopen("locadora.dat", "r");
    for (i = 0; i < 4; i++){
        fscanf(fp, "%d %s %lf %d %d %d %d", &filmes[i].indice, filmes[i].titulo, &filmes[i].orcamento, &filmes[i].idioma, &filmes[i].genero, &filmes[i].ano, &filmes[i].duracao);
    }

    while(1){
        scanf("%d", &temp);
        if (temp >= 0){
            ano = temp;
            scanf("%d %d %d %lf %d %d %d", &comp_ano, &idioma, &comp_idioma, &orcamento, &comp_orcamento, &duracao, &comp_duracao);

            printf("\n");
            for (i = 0; i < 4; i++){
                filtro = 0;
                filtro += Filtro(ano, filmes[i].ano, comp_ano) + Filtro(idioma, filmes[i].idioma, comp_idioma) + Filtro(orcamento, filmes[i].orcamento, comp_orcamento) + Filtro(duracao, filmes[i].duracao, comp_duracao);
                if (filtro == 4){
                    printf("%s\n", filmes[i].titulo);
                }
            }
            printf("\n");
        }else{
            break;
        }
    }

    fclose(fp);

    return 0;
}
