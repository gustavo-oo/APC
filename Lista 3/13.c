#include <stdio.h>
int main(){
    int i, numero;
    scanf("%d", &numero);
    for(i=1; i <= 10; i++){
        printf("%dx%d=%d\n", numero, i, numero*i);
    }
    return 0;
}