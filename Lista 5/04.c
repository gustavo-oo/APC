#include <stdio.h>

typedef struct
    {
    char nome[30];
    int idade;
    }pessoa;

int main(){
    int i, j, quantidade_pessoas;
    scanf("%d", &quantidade_pessoas);
    pessoa pessoas[quantidade_pessoas], auxiliar;
    int indices[quantidade_pessoas];


    for (i = 0; i < quantidade_pessoas; i++){
        scanf("%s %d", pessoas[i].nome, &pessoas[i].idade);
        indices[i] = i;
    }

    for (j = 0; j < quantidade_pessoas; j++){
        for (i = 0; i < quantidade_pessoas - 1; i++){
            if (pessoas[i].idade >= pessoas[i+1].idade){
                auxiliar = pessoas[i];
                pessoas[i] = pessoas[i+1];
                pessoas[i+1] = auxiliar;
            }
        }
    }

    for (i = quantidade_pessoas - 1; i >= 0 ; i--){
        printf("%s\n", pessoas[i].nome);
    }

    return 0;
}