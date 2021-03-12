#include <stdio.h>
int main(){
    int quantidadeVoltas = 0, volta = 0, melhorVolta = 0, piorVolta = 0;
    int melhorTempo = 10000, piorTempo = 0, penalidade = 0;
    int i, tempo = 0, valor = 0, tempoTotal = 0;
    scanf("%d", &quantidadeVoltas);
    for (i = 0; i < quantidadeVoltas;){
        scanf("%d", &valor);
        if (valor > 0){
            volta++;
            i++;
            tempo = valor + penalidade;
            penalidade = 0;
            if (tempo > piorTempo){
                piorTempo = tempo;
                piorVolta = volta;
            }
            if (tempo < melhorTempo){
                melhorTempo = tempo;
                melhorVolta = volta;
            }
            tempoTotal += tempo;
        }
        else{
            switch(valor){
                case -1:
                    penalidade = 10;
                    break;
                case -2:
                    penalidade = 25;
                    break;
                case -3:
                    penalidade = 40;
                    break;
            }
        }     
    }
    printf("Melhor volta: %d - %d seg\n", melhorVolta, melhorTempo);
    printf("Pior volta: %d - %d seg\n", piorVolta, piorTempo);
    printf("Tempo total: %d seg\n", tempoTotal);
    return 0;
}