#include <stdio.h>
int main(){
    int salario, aumento, total = 0, diferenca = 0;  
    while(1){
        scanf ("%d", &salario);
        if (salario > 0){
            aumento = 0;
            if (salario < 500)
                aumento = 100;
            else
                if (salario < 1000)
                    aumento  = 75;
                else
                    aumento = 50;

        total += salario + aumento;
        diferenca +=  aumento;
        }
        else{
            break;
        }
    }
    printf ("%d\n", total);
    printf ("%d\n", diferenca);
    return 0;
}

