#include <stdio.h>

int main(){
    int i, j, matriz[9][9];

    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            if (i == j){
                scanf("%d", &matriz[8-i][j]);
            }else{
                if(i + j == 8){
                    scanf("%d", &matriz[i-2*(4-j)][j]);
                }else{
                    scanf("%d", &matriz[i][j]);
                }
            }
        }
    }
    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}