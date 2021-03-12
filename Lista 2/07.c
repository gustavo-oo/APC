#include <stdio.h>
int main(){
    float peso, altura, imc;
    scanf("%f %f", &peso, &altura);
    imc = peso/(altura*altura);
    if(imc < 20){
        printf("ABAIXO\n");
    }else if(imc < 25){
        printf("NORMAL\n");
    }else if(imc < 30){
        printf("SOBREPESO\n");
    }else if(imc < 40){
        printf("OBESO\n");
    }else{
        printf("MORBIDO\n");
    }
    return 0;
}