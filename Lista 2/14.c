#include <stdio.h>
#include <math.h>
int main(){
    int entrada, saida, tempo, preco = 0;
    scanf("%d %d", &entrada, &saida);
    printf("Entrada\n%02d:%02d\nSaida\n%02d:%02d\n",entrada / 100, entrada % 100, saida / 100, saida % 100);
    entrada = 60 * floor(entrada / 100) + entrada % 100;
    saida = 60 * floor(saida / 100) + saida % 100; 
    tempo = saida - entrada;
    printf("Duracao(min)\n%d\n",tempo); 
    if(tempo > 120){
        preco = (tempo - 120) * 10;
        tempo = 120;
    }if(tempo <= 120 && tempo > 60){
        preco = preco + (tempo - 60) * 20;
        tempo = 60;
    }if(tempo <= 60 && tempo > 15){
        preco = preco + tempo * 30;
    }
    printf("Preco(centavos)\n%d\n", preco);
    return 0;
} 
