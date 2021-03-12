#include <stdio.h>
int main(){
    double altura, raio, volume;
    scanf("%lf %lf", &altura, &raio);
    volume = 3.1416*raio*raio*altura;
    printf("%.1lf\n", volume);
return 0;
}