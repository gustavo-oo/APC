#include <stdio.h>

int main(){
    long int i, numero;
    int divisores = 0;
    int primo = 0;
    int sequencia = 0;
    int fibonacci[1000];
    fibonacci[0] = 0;
    fibonacci[1] = 1;
    scanf("%li", &numero);
    for (i = 1; i <= numero; i++){
        if(numero % i == 0){
            divisores++;
        }
    }
    if (divisores == 2){
        primo = 1;
    }

    for (i = 2; i < 1000; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
        if(fibonacci[i] >= numero){
            break;
        }       
    }
    if (fibonacci[i] == numero){
        sequencia = 1;
    }
    if (sequencia && primo){
        printf("SIM\n");
    }else{
        printf("NAO\n");
    }
    return 0;
}