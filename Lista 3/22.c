#include <stdio.h>
int main(){
    int codigoVendedor, melhorVendedor, piorVendedor;
    double valorVendido, maiorValorVendido = 0, menorValorVendido = 10000; 
    double maiorComissao, piorComissao;
    int i;
    for (i = 0; i < 10; i++){
        scanf("%d", &codigoVendedor);
        scanf("%lf", &valorVendido);
        if (maiorValorVendido < valorVendido){
            melhorVendedor  = codigoVendedor;
            maiorValorVendido = valorVendido;
            if (valorVendido < 5000){
                maiorComissao = maiorValorVendido * (1.5/100);
            }
            else{
                if(valorVendido < 15000){
                    maiorComissao = maiorValorVendido * (3.5/100);
                    }
                else{
                    maiorComissao = maiorValorVendido * (4.7/100);
                }
            }
            
        }
        if (menorValorVendido > valorVendido){
            piorVendedor  = codigoVendedor;
            menorValorVendido = valorVendido;
            if (valorVendido < 5000){
                piorComissao = menorValorVendido * (1.5/100);
            }
            else{
                if(valorVendido < 15000){
                    piorComissao = menorValorVendido * (3.5/100);
                    }
                else{
                    piorComissao = menorValorVendido * (4.7/100);
                }
            }
            
        }

    }
    printf("%d %.2lf %d %.2lf\n", melhorVendedor, maiorComissao, piorVendedor, piorComissao);
    return 0;
}