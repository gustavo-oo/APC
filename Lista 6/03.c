#include <stdio.h>
#include <string.h>

typedef struct {
    int indice, idioma, genero, ano, duracao;
    char titulo[100];
    double orcamento;
}filme;

int main(){
    FILE *fp;
    filme filmes[4];
    double orcamento;
    char titulo[100];
    int i , indice, ano, idioma, duracao, genero, temp, indice_arq;
    

    fp = fopen("locadora.dat", "r++");
    for (i = 0; i < 4; i++){
        fscanf(fp, "%d %s %lf %d %d %d %d", &filmes[i].indice, filmes[i].titulo, &filmes[i].orcamento, &filmes[i].idioma, &filmes[i].genero, &filmes[i].ano, &filmes[i].duracao);
        printf("%d %s %.0lf %d %d %d %d\n", filmes[i].indice, filmes[i].titulo, filmes[i].orcamento, filmes[i].idioma, filmes[i].genero, filmes[i].ano, filmes[i].duracao);
    }

    while(1){
        scanf("%d", &indice);
        if(indice >= 1){
            scanf("%s %lf %d %d %d %d", titulo, &orcamento, &idioma, &genero, &ano, &duracao);

            fclose(fp);
            remove("locadora.dat");

            strcpy(filmes[indice - 1].titulo, titulo);
            filmes[indice - 1].orcamento = orcamento;
            filmes[indice - 1].idioma = idioma;
            filmes[indice - 1].genero = genero;
            filmes[indice - 1].ano = ano;
            filmes[indice - 1].duracao = duracao;

            fp = fopen("locadora.dat", "w");
            for(i = 0; i < 4; i++){
                fprintf(fp, "%d %s %.0lf %d %d %d %d\n", filmes[i].indice, filmes[i].titulo, filmes[i].orcamento, filmes[i].idioma, filmes[i].genero, filmes[i].ano, filmes[i].duracao);
                printf("%d %s %.0lf %d %d %d %d\n", filmes[i].indice, filmes[i].titulo, filmes[i].orcamento, filmes[i].idioma, filmes[i].genero, filmes[i].ano, filmes[i].duracao);
            }
            fclose(fp);
        }else{
            break;
        }
    }

    return 0;
}