#include <stdio.h>

int main(){
    int i, j,quantidade = 500, numeros[500], repeticoes[500];

    for (i = 0; i < quantidade; i++){
        repeticoes[i] = 0; //vou criar um array que vai indicar em que posição do array números existe um número repetido
    }

    for (i = 0; i < quantidade; i++){
        scanf("%d", &numeros[i]);
    }
    for (i = 0; i < quantidade; i++){
        for (j = 0; j < quantidade; j++){
            if (((float) numeros[i] / (float) numeros[j] == 1) && j > i){ //a divisão de um número por ele mesmo é igual a 1,então
                repeticoes[j] = 1;//eu fiz percorrer o array 2 vezes em paralelo e ir comparando os valores e armazenar o valor 1 no array repetições nos números repetidos exceto o 1º
            }
            if (numeros[i] == numeros[j] && numeros[i] == 0 && j > i){ //o msm do de cuma soq com 0 (eu poderia juntar com o de cima e fazer uma condição só)
                repeticoes[j] = 1;
            }
        }
    }

    for (i = 0; i < quantidade; i++){ //vai imprimir os números que não tiverem a marcação 1 no array repetições
        if (repeticoes[i] == 0){
            printf("%d ", numeros[i]);
        }
    }
    printf("\n");
    return 0;
}