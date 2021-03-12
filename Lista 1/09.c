#include <stdio.h>
#include <math.h>
int main(){
    double numero, elevado;
    scanf("%lf %lf", &numero, &elevado);
    printf("%.1lf\n", pow(numero,elevado));
    return 0;
}
