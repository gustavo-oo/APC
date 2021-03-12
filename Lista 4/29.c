#include <stdio.h>

int main(){
    int i, j, matriz[10][10], soma = 0;

    for (i = 0; i < 10; i++){
        for (j = 0; j < 10; j++){
            scanf("%d", &matriz[i][j]);
            if ( i >= j){
                soma += matriz[i][j];
            }
        }
    }
    printf("%d\n", soma);

    return 0;
}