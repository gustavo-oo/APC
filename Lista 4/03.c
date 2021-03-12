#include <stdio.h>

int main(){
    int i, limite, numeros[150];

    for (i = 0; i < 150; i++){
        scanf("%d", &numeros[i]);
    }
    scanf("%d", &limite);
    for (i = 0; i < 150; i++){
        if (numeros[i] < limite){
            printf("%d ", numeros[i]);
        }
    }
    return 0;
}