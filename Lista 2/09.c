#include <stdio.h>
int main(){
    int idade;
    char *categoria;
    scanf("%d", &idade);
    if (idade < 5){
        categoria = "SEM CATEGORIA";
    }else if(idade <= 7){
        categoria = "INFANTIL A";
    }else if(idade <= 10){
        categoria = "INFANTIL B";
    }else if (idade <= 13){
        categoria = "JUVENIL A";
    }else if (idade <= 17){
        categoria = "JUVENIL B";
    }else if (idade >= 18){
        categoria = "SENIOR";
    }
    printf("%s\n", categoria);
    return 0;
}