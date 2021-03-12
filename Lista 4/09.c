#include <stdio.h>
#include <math.h>

int main(){
    int i, numeros[121];
    float media = 0;
    
    for (i = 0; i < 121; i++){
        scanf("%d", &numeros[i]);
        media += numeros[i];
    }
    media /= 121;

    for (i = 0; i < 121; i++){
        printf("%.1f ", pow((numeros[i] - media), 2));
    }


    return 0;
}