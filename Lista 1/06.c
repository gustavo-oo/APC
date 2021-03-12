#include <stdio.h>
int main(){
    double deposito, taxa_juros, taxa_imposto, rendimento;
    float imposto, liquido;
    scanf("%lf %lf %lf", &deposito, &taxa_juros, &taxa_imposto);
    rendimento = (deposito*taxa_juros/100);
    imposto = rendimento*taxa_imposto/100;
    liquido = deposito + rendimento - imposto;
    printf("%.2f %.2f\n", imposto, liquido);
return 0;
}
