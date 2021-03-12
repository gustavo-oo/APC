#include <stdio.h>
#include "AnosParaDias.h"

void main(){
    int anos;
    printf("Digite a idade em anos:");
    scanf("%d", &anos);
    printf("Isso corresponde a %d dias\n", ConverteAnosDias(anos));
}