#include <stdio.h>

int main(){
    int i, j, matriz_a[4][5], matriz_b[4][5];
    for (i = 0; i < 4; i++){
        for (j = 0; j < 5; j++){
            scanf("%d", &matriz_a[i][j]);
        }
    }
    for (i = 0; i < 4; i++){
        for (j = 0; j < 5; j++){
            scanf("%d", &matriz_b[i][j]);
        }
    }
    for (i = 0; i < 4; i++){
        for (j = 0; j < 5; j++){
            printf("%d ", matriz_a[i][j] + matriz_b[i][j]);
        }
        printf("\n");
    }
    return 0;
}