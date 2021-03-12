#include <stdio.h>
#include <math.h>
int main(){
    char operador;
    float numero1, numero2, numero3, delta, x1, x2;
    scanf("%c %f", &operador, &numero1);
    switch(operador){
        case '+':
            scanf("%f", &numero2);
            printf("%.3f", numero1 + numero2);
            break;
        case '-':
            scanf("%f", &numero2);
            printf("%.3f", numero1 - numero2);
            break;
        case '*':
            scanf("%f", &numero2);
            printf("%.3f", numero1 * numero2);
            break;
        case '/':
            scanf("%f", &numero2);
            if (numero2 != 0){
            printf("%.3f", numero1 / numero2);
            }else{
                printf("ERROR!");
            }
            break;
        case '%':
            scanf("%f", &numero2);
            if(numero2 != 0 && numero1 - (int) numero1 == 0 && numero2 - (int) numero2 == 0){
                printf("%d.000", (int)(numero1) % (int)(numero2));
            }else{
               printf("ERROR!"); 
            }
            break;
        case 'p':
            scanf("%f", &numero2);
            if (numero1 >= 0 || numero1 < 0 && numero2 - (int) numero2 == 0){
                printf("%.3f", pow(numero1, numero2));
            }else{
               printf("ERROR!");  
            }
            break;
        case 'b':
            scanf("%f", &numero2);
            scanf("%f", &numero3);
            delta = pow(numero2, 2) - 4*numero1*numero3;
            if(numero1 != 0 && delta >= 0){
            x1 = (-numero2 + sqrt(delta)) / (2 * numero1);
            x2 = (-numero2 - sqrt(delta)) / (2 * numero1);
            printf("%.3f %.3f", x1, x2);
            }else{
                printf("ERROR!");
            }
            break;
        case 'r':
            if(numero1 >= 0){
                printf("%.3f", sqrt(numero1));
            }else{
                printf("ERROR!");   
            }
            break;
    }
    printf("\n");
    return 0;
}