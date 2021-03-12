#include <stdio.h>

int main(){
    int i, j, numero,soma = 0;

    for (i = 0; i < 7; i++){
        for (j = 0; j < 7; j++){
            scanf("%d", &numero);
            if (i == j){
                soma += numero;
            }
        }
    }
    printf("%d\n", soma);
    return 0;
}