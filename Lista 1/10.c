#include <stdio.h>
#include <math.h>
int main(){
    int ano_nascimento, ano_atual, idade;
    scanf("%d %d", &ano_nascimento, &ano_atual);
    idade = ano_atual - ano_nascimento;
    printf("%d %d\n", idade, 2017-ano_nascimento);
    return 0;
}
