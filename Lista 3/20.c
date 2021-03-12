#include <stdio.h>

int main(){
    int i = 0, tempo = 0, penalidade = 0, valor = 0, total = 0, piorTempo = 0, melhorTempo = 100000;
    int piorVolta = 0, melhorVolta = 0;
    
    while(1){
        scanf("%d", &valor);
        if (valor != 0){
            if (valor > 0){
                i++;
                tempo = valor - penalidade;
                penalidade = 0;

                if (tempo > piorTempo){
                    piorTempo = tempo;
                    piorVolta = i;
                }
                if (tempo < melhorTempo){
                    melhorTempo = tempo;
                    melhorVolta = i;
                }
                total += tempo;

            }else{
                penalidade = valor; 
            }
        }
        else{
            break;
        }
    }
    printf("Melhor volta: %d - %d seg\n", melhorVolta, melhorTempo);
    printf("Pior volta: %d - %d seg\n", piorVolta, piorTempo);
    printf("Tempo total: %d seg\n", total);
    return 0;
}
