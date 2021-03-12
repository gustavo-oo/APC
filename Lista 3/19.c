#include <stdio.h>

int main(){
    int i, numero, maior, menor;

    scanf("%d", &numero);
    menor = numero;
    maior = numero;
    if (numero > maior){
        maior = numero;
    }
    if (numero < menor){
        menor = numero;
    }

    for (i = 0; i < 19; i++){
        scanf("%d", &numero);
        if (numero > maior){
            maior = numero;
        }
        if (numero < menor){
            menor = numero;
        }
    }
    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);
    return 0;
}