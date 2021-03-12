#include <stdio.h>

char * extraiSobrenome(char * nome){
    int i, j = 0;
    static char sobrenome[30];

    for (i = 0; i < 30; i++){
        if (nome[i] == '_'){
            nome[i] = '\0';
            break;
        }
    }
    return &nome[i+1];
}

int main(){
    char nome[30];
    char * sobrenome;
    scanf("%s", nome);
    sobrenome = extraiSobrenome(nome);
    printf("Nome\n%s\nSobrenome\n%s\n",nome, sobrenome );
    return 0;
}
