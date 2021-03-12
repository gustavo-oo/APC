#include <stdio.h>

int main(){
    int i, limite, quantidade, numeros[87];

    for (i = 0; i < 87; i++){
        scanf("%d", &numeros[i]);
        if (numeros[i] == 0){
            quantidade = i;
            break;
        }
    }
    scanf("%d", &limite);
    for ( i = 0; i < quantidade; i++){
        if (numeros[i] > limite){
            printf("%d ", numeros[i]);
        }
    }
    
    return 0;
}