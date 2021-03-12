#include <stdio.h>
int main(){
    float numero1, numero2, numero3, media;
    scanf("%f %f %f", &numero1,&numero2,&numero3);
    media = (numero1 + numero2 + numero3)/ 3;
    printf("%.1f\n", media);
return 0;
}