#include <stdio.h>

int main(){
    double diferenca, resistencia, resistenciaSerie = 0, resistenciaParalelo = 0, media = 0, maiorResistencia = 0;
    int i;
    
    for (i = 0; i < 6; i++){
        scanf("%lf", &resistencia);
        resistenciaSerie += resistencia;
        resistenciaParalelo += resistencia;
        media += resistencia / 6;

        if (resistencia > maiorResistencia){
            maiorResistencia = resistencia;
        }
    }
    resistenciaParalelo = 1 / resistenciaParalelo;
    diferenca = maiorResistencia - media;


    printf("%.4lf %.4lf %.4lf\n", resistenciaSerie, resistenciaParalelo, diferenca);
    return 0;
}