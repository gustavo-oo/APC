#include <stdio.h>

int main(){
    int numero;
    while(1){
        scanf("%d", &numero);
        if (numero >= 0){
            if (numero % 2 == 0){
                printf("%d: par\n", numero);
            }
            else{
                printf("%d: impar\n", numero);
            }
        }
        else{
            break;
        }
    }
    return 0;
}