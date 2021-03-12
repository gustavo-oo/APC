#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    char titulo[100];
    double orcamento;
    int i, idioma, genero, ano, duracao;

    fp = fopen("locadora.dat", "w");

    for(i = 1;;i++){
        scanf("%s", titulo);
        if ( strcmp(titulo, "FIM") == 0 ){
            break;
        }
        scanf("%lf %d %d %d %d", &orcamento, &idioma, &genero, &ano, &duracao);
        fprintf(fp, "%d %s %.0lf %d %d %d %d\n", i, titulo, orcamento, idioma, genero, ano, duracao);
    }
   
    fclose(fp);

    return 0;
}