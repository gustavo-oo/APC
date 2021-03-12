#include <stdio.h>

int main(){
    int i, j, numero, fatorial = 1, divisores, primo = 1;
    
    do{
        scanf("%d", &numero);
    }while(numero < 1);

    for(i = 1; i < numero+1; i++){
        fatorial *= i;
    }

    for(i = 1; i < fatorial; i++){
        divisores = 0;
        for(j = 1; j < i + 1; j++){
            if(i % j == 0){
                divisores++;
            }
        }
        if (divisores == 2){
            printf("%d ", i);
            primo = 0;
        }
    }
    if (primo){
        printf("NENHUM PRIMO");
    }
    printf("\n");
    return 0;
}