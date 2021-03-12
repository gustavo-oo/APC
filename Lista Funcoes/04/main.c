#include "raizes.h"
#include <math.h>
#include <stdio.h>

void main(){
    float a, b, c, x1, x2;
    int raizes;
    printf("Cáculo das raízes de uma função quadrática:\n\n");

    printf("Digite o  valor de A:");
    scanf("%f", &a);
    printf("Digite o valor de B:");
    scanf("%f", &b);
    printf("Digite o valor de C:");
    scanf("%f", &c);
    raizes = baskhara(a, b, c, &x1, &x2);

    printf("\nNúmero de raízes reais: %d\n", raizes);
    if (raizes != 0) {
        printf("X1: %.2f\n", x1);
        printf("X2: %.2f\n", x2);
    }
}