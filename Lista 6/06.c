#include <stdio.h>
#include <math.h>

double absoluto(double valor){
    if (valor < 0){
        valor *= -1;
    }
    return valor;
}

int main(){
    double b2_b1, a2_a1, x, y, distancia;
    int menor_distancia, indice_menor, contador = 0, i, j, pontos[8][3], indice_1, indice_2;
    FILE *fp;

    fp = fopen("pontos.dat","r");
    for (i = 0; i < 8; i++){
        for(j = 0; j < 3; j++){
            fscanf(fp, "%d", &pontos[i][j]);
        }
    }
    fclose(fp);

    scanf("%d %d", &indice_1, &indice_2);

    for(i = 0; i < 8; i++){
        if ( pontos[i][0] != indice_1 && pontos[i][0] != indice_2){
            b2_b1 = pontos[indice_2 - 1][2] - pontos[indice_1 - 1][2];
            a2_a1 = pontos[indice_2 - 1][1] - pontos[indice_1 - 1][1];
            x = pontos[i][1];
            y = pontos[i][2];
            distancia = absoluto(b2_b1*x - a2_a1*y + a2_a1*pontos[indice_2 - 1][2] - b2_b1*pontos[indice_2 - 1][1]);
            distancia /= sqrt( pow(b2_b1, 2) + pow(a2_a1, 2));

            if(contador == 0){
                menor_distancia = distancia;
                indice_menor = pontos[i][0];
                contador++;
            }else{
                if(distancia < menor_distancia){
                    menor_distancia = distancia;
                    indice_menor = pontos[i][0];
                }
            }
        }
    }

    printf("%d\n", indice_menor);
    return 0;
}