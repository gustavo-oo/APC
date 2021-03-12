#include <stdio.h>
int main(){
    double salario, salariofinal;
    scanf("%lf", &salario);
    salariofinal = salario*(0.98);
    printf("%.2lf\n", salariofinal);
    return 0; 
}
