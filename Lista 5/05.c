#include <stdio.h>

typedef struct {
    char nome[20];
    int posicao;
}presente;

int main(){
    int quantidade_presentes, trocas, x, y, i;
    scanf("%d", &quantidade_presentes);
    presente presentes[quantidade_presentes], auxiliar;

    for (i = 0; i < quantidade_presentes; i++){
        scanf("%s", presentes[i].nome);
    }
   
    scanf("%d", &trocas);

    for (i = 0; i < trocas; i++){
        scanf("%d %d", &x, &y);
        auxiliar = presentes[x];
        presentes[x] = presentes[y];
        presentes[y] = auxiliar;
    }
    for (i = 0; i < quantidade_presentes; i++){
        printf("%s\n", presentes[i].nome);
    }
    return 0;
}