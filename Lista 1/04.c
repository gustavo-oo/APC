#include <stdio.h>
int main(){
    double salario, porcentagem_aumento, novosalario, aumento;
    scanf("%lf %lf", &salario, &porcentagem_aumento);
    aumento = salario*porcentagem_aumento/100;
    novosalario = salario+aumento;
    printf("%.2lf %.2lf\n", aumento, novosalario);
    return 0; 
}
