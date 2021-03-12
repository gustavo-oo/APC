#include <math.h>
#include "raizes.h"

int baskhara(float a, float b, float c, float* endereco_x1, float* endereco_x2){
    int raizes;
    float delta;
    delta = pow(b,2) - 4*a*c;
    if ( (delta < 0) ? (raizes=0) : (delta==0) ? (raizes=1) : (raizes=2) );
    *endereco_x1 = ( -b + sqrt(delta) ) / (2 * a);
    *endereco_x2 = ( -b - sqrt(delta) ) / (2 * a);
    return raizes;
}