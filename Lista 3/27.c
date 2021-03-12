#include <stdio.h>
#include <math.h>

int main(){
    int i;
    float coeficiente, parte1 = 0, parte2 = 0, parte3 = 0, parte4 = 0, parte5 = 0, parte6 = 0, parte7 = 0;
    float x = 0, y = 0;
    for(i = 0; i < 10; i++){
        scanf("%f %f", &x, &y);

        parte1 += x*y;
        parte2 += x;
        parte3 += y;
        parte4 += x*x;
        parte5 += x;
        parte6 += y*y;
        parte7 += y;

    }
    parte1 = 10*parte1;
    parte4 = 10*parte4;
    parte5 = pow(parte5, 2);
    parte6 = 10*parte6;
    parte7 = pow(parte7, 2);

    coeficiente = ( parte1 - (parte2 * parte3) ) / ( ( pow( (parte4 - parte5), 0.5) ) * pow((parte6 - parte7), 0.5) );
    printf("%.2f\n", coeficiente);
    return 0;
}