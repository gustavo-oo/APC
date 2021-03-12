#include <stdio.h>

int main(){
    int i, j, numero, array_x[10]={0}, array_y[10]={0}, igual, tamanho_x = 0, tamanho_y = 0, tamanho_resultante = 0, resultante[20];

    for(i = 0; i < 20; i++){
        scanf("%d", &numero);
        igual = 0;
        for (j = 0; j < 10; j++){
            if (i < 10){
                if(array_x[j] == numero){
                    igual = 1;
                }
            }else{
                if(array_y[j] == numero){
                    igual = 1;
                }  
            }
        }
        if (i < 10){
            if(!igual){
                array_x[tamanho_x] = numero;
                tamanho_x++;
            }
            if (numero == 0){
                tamanho_x++;
            }
        }else{
            if(!igual){
                array_y[tamanho_y] = numero;
                tamanho_y++;
            }
            if (numero == 0){
                tamanho_y++;
            }
        }
    }

    for (i = 0; i < tamanho_x; i++){
        resultante[i] = array_x[i];
    }
    tamanho_resultante = tamanho_x;

    for (i = 0; i < tamanho_y; i++){
        igual = 0;
        for (j = 0; j < tamanho_x; j++){
            if(array_y[i] == resultante[j]){
                igual = 1;
            }
        }
        if(!igual){
            resultante[tamanho_resultante] = array_y[i];
            tamanho_resultante++;
        }
    }
    for (i = 0; i < tamanho_resultante; i++){
        printf("%d ", resultante[i]);
    }
    printf("\n");

    for (i = 0; i < tamanho_x; i++){
        igual = 0;
        for (j = 0; j < tamanho_y; j++){
            if (array_x[i] == array_y[j]){
                igual = 1;
            }
        }
        if (!igual){
            printf("%d ", array_x[i]);
        }
    }
    printf("\n");

    for (i = 0; i < tamanho_x; i++){
        igual = 0;
        for (j = 0; j < tamanho_y; j++){
            if (array_x[i] == array_y[j]){
                igual = 1;
            }
        }
        if (igual){
            printf("%d ", array_x[i]);
        }
    }
    printf("\n");      
    return 0;
}

