#include <stdio.h>

int main(){
    int i, numeros[300];
    for (i = 0; i < 300; i++){
        scanf("%d", &numeros[i]);
        if (numeros[i] < 0){
            break;
        }
    }
    for (i += -1; i >= 0; i--){
        printf("%d ", numeros[i]);
    }
    return 0;
}