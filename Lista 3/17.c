#include <stdio.h>

int main(){
    int i , quantidade, velocidade, maior_velocidade = 0;
    scanf("%d", &quantidade);
    for( i = 0; i < quantidade; i++){
        scanf("%d", &velocidade);
        if (velocidade > maior_velocidade){
            maior_velocidade = velocidade;
        }
    }
    if (maior_velocidade < 10){
        printf("1");
    }
    else{
        if(maior_velocidade < 20){
            printf("2");            
        }
        else{
            printf("3");
            }
    }
    printf("\n");
    return 0;
}