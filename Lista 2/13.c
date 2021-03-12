#include <stdio.h>
int main(){
    float preco1, preco2;
    int codigo1, codigo2;
    void preco(int codigo1, int codigo2){
        switch(codigo1){
            case 1:
                preco1 = 5;
                break;
            case 2:
                preco1 = 7;
                break;
            case 3:
                preco1 = 7.5;
                break;
            case 4:
                preco1 = 3.5;
                break;
            case 5:
                preco1 = 3;
                break;
        }
        switch(codigo2){
            case 1:
                preco2 = 5;
                break;
            case 2:
                preco2 = 7;
                break;
            case 3:
                preco2 = 7.5;
                break;
            case 4:
                preco2 = 3.5;
                break;
            case 5:
                preco2 = 3;
                break;

        }
        printf("Total: R$ %.2f\n", preco1+preco2);
    }
    scanf("%d%d", &codigo1, &codigo2);
    preco(codigo1, codigo2);
    return 0;
}