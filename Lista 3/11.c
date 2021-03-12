#include <stdio.h>
#include <stdlib.h>
int main(){
    int i, tamanho = 1, menor, maior;
    int *numeros;
    scanf("%d", &tamanho);
    numeros = malloc(sizeof(int)*tamanho);
    for (i=0;i < tamanho; i++){
        scanf("%d", &numeros[i]);       
    }
    menor = numeros[0];
    maior = numeros[0];
    for (i=0;i < tamanho; i++){
        if (numeros[i] < menor){
            menor = numeros[i];
        }
        if (numeros[i] > maior){
            maior = numeros[i];
        }
    }
    printf("Menor: %d\n", menor);
    printf("Maior: %d\n", maior);
    free(numeros);
    return 0;
}