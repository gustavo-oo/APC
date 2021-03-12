#include "leponto.h"
#include <stdio.h>

void main(){
    float x1,x2,y1,y2, coeficiente_angular;

    LePonto();
    x1 = x;
    y1 = y;
    printf("\n");

    LePonto();
    x2 = x;
    y2 = y;
    printf("\n");

    if (x2 != x1) {
        coeficiente_angular = (y2-y1)/(x2-x1);
        printf("Coeficiente angular da reta: %.2f\n", coeficiente_angular);
    }else{
        printf("ERRO!!!\n");
    }
}