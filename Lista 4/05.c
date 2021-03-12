#include <stdio.h>

int main(){
    int i, limite, quantidade = 106, numeros[106], soma = 0;

    for (i = 0; i < 106; i++){
        scanf("%d", &numeros[i]);
        if (numeros[i] == 0){
            quantidade = i;
            break;
        }

    }
    scanf("%d", &limite);
    for (i = 0; i < quantidade; i++){
        if (numeros[i] <= limite){
            soma += numeros[i];
        }
    }
    printf("%d\n", soma);

    return 0;
}