#include <stdio.h>

int main(){

    int i, numeros[200];
    for (i = 0; i < 200; i++){
        scanf("%d", &numeros[i]);
    }
    for (i+= -1; i >= 0; i--){
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}