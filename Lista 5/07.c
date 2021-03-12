#include <stdio.h>

//é permitido criar funções auxiliares, desde que não se altere nenhuma linha do método main

int conferir_contagem(int *my_hand){
	int i, j, auxiliar, troca = 1;

    for (j = 0; j < 5; j++){
        for (i = 0; i < 4; i++){
            if (my_hand[i] > my_hand[i+1]){
                auxiliar = my_hand[i];
                my_hand[i] = my_hand[i+1];
                my_hand[i+1] = auxiliar;
                troca = 0;
            }
        }
    }
    return troca;
}

void corrigir_contagem(int *my_hand){
}
	
int main(){
	int i, mao[5];
	for(i=0; i<5; ++i)
		scanf("%d", &mao[i]);

	if(conferir_contagem(mao))printf("Contagem Correta\n");
	else{
		printf("Contagem Incorreta\n");
		printf("Sequencia certa: ");
		corrigir_contagem(mao);
		for(i=0; i<5; ++i)
			printf("%d%c", mao[i], ((i==4)? '\n' : ' '));
	}

 return 0;
}
