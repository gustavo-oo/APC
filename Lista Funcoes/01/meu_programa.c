#include <stdio.h>
#include "SinalNumero.h"

void main(){
    int numero;
    printf("Digite um número:");
    scanf("%d", &numero);
    switch( sinal(numero) ){
        case 1:
            printf("Número positivo\n");
            break;
        case 0:
            printf("Zero\n");
            break;
        case -1:
            printf("Número negativo\n");
            break;
    }
}