#include <stdio.h>
int main(){
    int i, quantidade, largura, comprimento, AreaTotal = 0;
    scanf("%d", &quantidade);
    for (i = 0; i < quantidade; i++){
        scanf("%d %d", &largura, &comprimento);
        AreaTotal += largura*comprimento;
    }
    printf("%d\n", AreaTotal);
    return 0;
}