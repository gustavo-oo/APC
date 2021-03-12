#include <stdio.h>

int main(){
        int i, quantidadeVezes, populacaoA, populacaoB, anos;
        float taxaA, taxaB; 

        scanf ("%d", &quantidadeVezes);
        for (i = 0; i < quantidadeVezes; i++){
            scanf("%d %d %f %f", &populacaoA, &populacaoB, &taxaA, &taxaB);
            for(anos = 0; populacaoA < populacaoB; anos++){
                populacaoA *= (int) 1+(taxaA/100);
                populacaoB *= (int) 1+(taxaB/100);
            }
        
            if (anos > 100){
                printf("Mais de 1 seculo.\n");
            }else{
                printf("%d anos.\n", anos);
            }
        }
    
    return 0;
}