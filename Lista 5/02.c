#include <stdio.h>

void trocaValores(int *var1, int *var2){
        *var1 += *var2;
        *var2 = *var1 - *var2;
        *var1 -= *var2;
}

int main(){
    int var1, var2;
    scanf("%d %d", &var1, &var2);
    trocaValores(&var1, &var2);
    printf("%d\n%d\n", var1, var2);
    return 0;
}
