#include <stdio.h>

int main(){
    int i, j, soma, soma_maior_linha, maior_linha, matriz[10][5];

    for (i = 0; i < 10; i++){
        for (j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 10; i++){
        soma = 0;
        for (j = 0; j < 5; j++){
            soma += matriz[i][j];
        }
        if (i == 0){
            soma_maior_linha = soma;
            maior_linha = 0;
        }
        if (soma > soma_maior_linha){
                soma_maior_linha = soma;
                maior_linha = i;
            }
    }
    printf("%d\n", maior_linha);
    return 0;
}