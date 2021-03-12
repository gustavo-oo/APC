#include <stdio.h>
#include <string.h>

int main(){
    char string[100];
    int i;

    scanf("%s", string);
    for (i = strlen(string) - 1; i >= 0; i--){
        printf("%c", string[i]);
    }

    return 0;
}