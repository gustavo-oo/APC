#include <stdio.h>
int main(){
    double salariomedio, credito;
    scanf("%lf", &salariomedio);
    if (salariomedio <= 500.0){
        credito = 0;
    }else if(salariomedio <= 1000.0){
        credito = salariomedio*0.3;
    }else if(salariomedio <= 3000.0){
        credito = salariomedio*0.4;
    }else{
        credito = salariomedio*0.5;
    }
    printf("%.2lf\n", credito);
    return 0;
}