#include <stdio.h>

int main(){
    int i, j, matriz[7][7], soma_cruz = 0, soma_quadrante = 0, soma_total = 0;

    for (i = 0; i < 7; i++){
        for (j = 0; j < 7; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    //soma da cruz
    for (i = 0; i < 7; i++){
        for (j = 0; j < 7; j++){
            if (i == 3 || j == 3){
                soma_cruz += matriz[i][j];
            }
        }
    }

    //Teste do 4º quadrante
    for (i = 0; i < 3; i++){
        for (j = 0; j < 3; j++){
            soma_quadrante += matriz[i][j];
        }
    }
    if (soma_quadrante > soma_cruz){
        soma_total += soma_quadrante;
    }
    soma_quadrante = 0;

    //Teste do 3º quadrante
    for (i = 4; i < 7; i++){
        for (j = 0; j < 3; j++){
            soma_quadrante += matriz[i][j];
        }
    }
    if (soma_quadrante > soma_cruz){
        soma_total += soma_quadrante;
    }
    soma_quadrante = 0;

    //Teste do 2º quadrante
    for (i = 4; i < 7; i++){
        for (j = 4; j < 7; j++){
            soma_quadrante += matriz[i][j];
        }
    }
    if (soma_quadrante > soma_cruz){
        soma_total += soma_quadrante;
    }
    soma_quadrante = 0;

    //Teste do 1º quadrante
    for (i = 0; i < 3; i++){
        for (j = 4; j < 7; j++){
            soma_quadrante += matriz[i][j];
        }
    }
    if (soma_quadrante > soma_cruz){
        soma_total += soma_quadrante;
    }
    printf("%d\n", soma_total);

    return 0;
}