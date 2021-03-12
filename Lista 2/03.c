#include <stdio.h>
int main(){
    int numero, contador = 0, maior = 0, meio = 0, menor = 0;
    while (contador < 3){
        scanf("%d", &numero);
        if(numero > maior){
            menor = meio;
            meio = maior;
            maior = numero;
        }else if(numero > meio){
            menor = meio;
            meio = numero;
        }else{
            menor = numero;
        }
        contador++;
    }
    printf("%d %d %d\n", menor, meio, maior);
    return 0;
}