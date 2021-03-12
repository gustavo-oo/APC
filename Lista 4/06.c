#include <stdio.h>

int main(){
    int i, limite, quantidade = 0, numeros[53]; 
    float media = 0;

    for (i = 0; i < 53; i++){
        scanf("%d", &numeros[i]);
    }

    scanf("%d", &limite);

    for (i = 0; i < 53; i++){
        if (numeros[i] <= limite){
            media += numeros[i];
            quantidade++;
        }
    }
    printf("%.1f\n", media/(quantidade) );

    return 0;
}