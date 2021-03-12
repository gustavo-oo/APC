#include <stdio.h>
int main(){
    int i;
    float dinheiro, rendimentoMensal, rendimentoTotal = 0, dinheiroTotal = 0;
    for(i = 0; i < 12; i++){
        scanf("%f", &dinheiro);
        dinheiroTotal += dinheiro;
        if (dinheiroTotal < 10000){
            rendimentoMensal = dinheiroTotal*(1.75/100);
        }else{
            rendimentoMensal = dinheiroTotal*(2.25/100);
        }
        dinheiroTotal += rendimentoMensal;
        rendimentoTotal += rendimentoMensal;
    }
    printf("%.2f\n", rendimentoTotal);
    return 0;
}