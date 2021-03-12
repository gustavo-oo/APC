#include <stdio.h>
int main(){
    int numero1, numero2;
    scanf("%d %d", &numero1, &numero2);
    if(numero1 % numero2 == 0 ){
        printf("MULTIPLO\n");
    }else{
        printf("NAO E MULTIPLO\n");
    }
    return 0;
}