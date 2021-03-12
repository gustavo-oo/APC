#include <stdio.h>

int main(){
    int i, numeros[135], limite_inferior, limite_superior;

    for(i = 0; i < 135; i++){
        scanf("%d", &numeros[i]);
    }
    scanf("%d", &limite_inferior);
    scanf("%d", &limite_superior);


    for (i = 0; i < 135; i++){
        if (numeros[i] > limite_superior || numeros[i] < limite_inferior){
            printf("%d ", numeros[i]);  
        }
    }
    return 0;
}