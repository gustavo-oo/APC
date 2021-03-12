#include <stdio.h>
int main(){
    int idade, idadetotal = 0, opiniao;
    int otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0;
    int quantidade_pessoas = 0;
    while(1){
        scanf("%d", &idade);
        if (idade >= 0) {
            quantidade_pessoas += 1;
            do{
                scanf("%d", &opiniao);
                switch(opiniao){
                    case 1:
                        otimo += 1;
                        break;
                    case 2:
                        bom += 1;
                        break;
                    case 3:
                        regular += 1;
                        break;
                    case 4:
                        ruim += 1;
                        break;
                    case 5:
                        pessimo += 1;
                        break;
                }
            }while((opiniao != 1 && opiniao != 2 && opiniao != 3 && opiniao != 4 && opiniao != 5));
        idadetotal += idade;
        }
        else{
            break;
        }
    }
    printf("qtde de participantes: %d\n", quantidade_pessoas);
    printf("idade media dos participantes: %.1f\n", (float) idadetotal/(quantidade_pessoas) );
    printf("Otimo: %.1f%%\n", (float) otimo/quantidade_pessoas * 100);
    printf("Bom: %.1f%%\n", (float) bom/quantidade_pessoas * 100);
    printf("Regular: %.1f%%\n", (float) regular/quantidade_pessoas * 100);
    printf("Ruim: %.1f%%\n", (float) ruim/quantidade_pessoas * 100);
    printf("Pessimo: %.1f%%\n", (float) pessimo/quantidade_pessoas * 100);
    return 0;
}
