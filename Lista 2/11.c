#include <stdio.h>
#include <math.h>
int main(){
    double x;
    float fx;
    scanf("%lf", &x);
    if (x <= 1){
        fx = 1;
    }else if(x <= 2){
        fx = 2;
    }else if(x <= 3){
        fx = pow(x,2);
    }else if(x > 3){
        fx = pow(x,3);
    }
    printf("%.1f\n", fx);
    return 0;
}