#include <stdio.h>
int main(){
    int idade, mensalidade;
    scanf("%d", &idade);
    if (idade < 10){
        mensalidade = 30;
    }else if(idade <= 29){
        mensalidade = 60;
    }else if(idade <= 45){
        mensalidade = 120;
    }else if (idade <= 59){
        mensalidade = 150;
    }else if (idade <= 65){
        mensalidade = 250;
    }else if (idade > 65){
        mensalidade = 400;
    }
    printf("R$ %d,00\n", mensalidade);
    return 0;
}