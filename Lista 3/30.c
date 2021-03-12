#include <stdio.h>
#include <math.h>

int main(){
    int i, numero, base, tamanho, digito[1000], decimal = 0;;
    scanf("%d", &numero);
    scanf("%d", &base);

    for (i = 1; numero > pow(10, i); i++); //descobre o tamanho do número
    tamanho = i;

    for(i = 1; i <= tamanho + 1; i++){ //separador dos dígitos
        digito[i-1] = ( numero % (int) pow(10, i) ) / pow(10, i - 1);
        if(digito[i-1] >= base){
            printf("ERROR\n");
            return 0;
        }
    }
    for (i = 0; i < tamanho+1; i++){
       decimal += digito[i]*pow(base, i);
    }
    printf("%d\n", decimal);


    return 0;
}