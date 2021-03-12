#include <stdio.h>

int main(){
    int i, j, maior, matriz[4][5], posicao[2];

    for (i = 0; i < 4; i++){
        for (j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
            if (i == 0 && j == 0){
                maior = matriz[0][0];
            }
            if ( matriz[i][j] > maior){
                maior = matriz[i][j];
                posicao[0] = i;
                posicao[1] = j;
            }
        }
    }
    printf("%d %d %d\n", maior, posicao[0], posicao[1]);
    return 0;
}