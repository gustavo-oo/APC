#include <stdio.h>
int main(){
    int altura1, altura2, anos;
    scanf ("%d %d", &altura1, &altura2);
    for (anos = 0; altura2 < altura1; anos++){
        altura1 += 2;
        altura2 += 3;
    }
    printf("%d\n", anos);
    return 0;
}