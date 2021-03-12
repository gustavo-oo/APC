#include <stdio.h>
int main(){
    int numero;
    scanf("%d", &numero);
    if(numero % 2 == 0 ){
        printf("PAR\n");
    }else{
        printf("IMPAR\n");
    }
    return 0;
}