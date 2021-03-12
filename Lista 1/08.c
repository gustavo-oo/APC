#include <stdio.h>
#include <math.h>
int main(){
    int numero;
    scanf("%d", &numero);
    printf("%.1f %.1f %.1f %.1f\n", pow(numero,2), pow(numero,3), pow(numero, 1.0/2.0), pow(numero, (1.0/3.0)) );
return 0;
}