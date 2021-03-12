#include <stdio.h>

int main(){
    int i, j, simetrica = 1,matriz[9][9];

    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 9; i++){
        for (j = 0; j < 9; j++){
            if ( matriz[i][j] == matriz[j][i]){
                simetrica = 0;
            }
            
        }
    }
    if (simetrica){
        printf("S\n");
    }else{
        printf("N\n");
    }
    
    return 0;
}