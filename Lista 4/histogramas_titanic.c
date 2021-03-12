#include <stdio.h>

int main(){
    int i, j, k = 0,tarefa;
    int quantidade_passageiros;
    scanf("%d", &tarefa);
    scanf("%d", &quantidade_passageiros);
    float passageiros[quantidade_passageiros][7];
    char letra;

    void criarHistograma(int variavel, int vivo){
        int array_contagem_mortos[100] = {0};
        int array_contagem_vivos[100] = {0};
        int array_comparacao[2][128];
        int inicio, fim;

        if (variavel != 6 && variavel != 7){
            switch(variavel){
                case 0:
                    inicio = 1;
                    fim = 3;
                break;

                case 1:
                    inicio = 0;
                    fim = 1;
                break;

                case 2:
                    inicio = 0;
                    fim = 99;
                break;

                case 3:
                    inicio = 0;
                    fim = 9;
                break;

                case 4:
                    inicio = 0;
                    fim = 9;
                break;

                case 5:
                    inicio = 0;
                    fim = 2;
                break;
            }

            for (i = 0; i < quantidade_passageiros; i++){
                if (passageiros[i][6] == 0){
                    array_contagem_mortos[ (int) passageiros[i][variavel] - inicio]++;
                }else{
                    array_contagem_vivos[ (int) passageiros[i][variavel] - inicio]++;
                }    

                if (passageiros[i][2] > 99){
                passageiros[i][2] = 99;
                }
                if (passageiros[i][3] > 9){
                    passageiros[i][3] = 9;
                }
                if (passageiros[i][4] > 9){
                    passageiros[i][4] = 9;
                }
            }
            if (vivo == 0 || vivo == 3 || vivo == 4){
                for (i = 0; i < fim - inicio + 1; i++){
                    if (vivo == 0 || vivo == 3){
                        printf("%d ", array_contagem_mortos[i]);
                    }else{
                        array_comparacao[0][k] = array_contagem_mortos[i];
                        k++;
                    }
                }
                if (vivo == 3){
                    printf("\n");
                }
            }
            if (vivo == 1 || vivo == 3 || vivo == 5){
                for (i = 0; i < fim - inicio + 1; i++){
                    if (vivo == 1 || vivo == 3){
                        printf("%d ", array_contagem_vivos[i]);
                    }else{
                        array_comparacao[1][k] = array_contagem_vivos[i];
                        k++;
                    }
                }
                if (vivo == 3){
                    printf("\n");
                }
            }

        }else{
            if(variavel == 6){
                for (j = 0; j < 6; j++){
                    criarHistograma(j, 0); // função 0 faz o histograma de mortos da variavel
                }
                printf("\n");
                for (j = 0; j < 6; j++){
                    criarHistograma(j, 1); //função 1 faz o histograma de vivos da variavel
                }
                printf("\n");
            }

            if (variavel = 7){
                for (j = 0; j < 6; j++){
                    criarHistograma(7, 4); //funcao 4 faz o array de histogramas de mortos
                    k = 0;
                    criarHistograma(7, 5);//funcao 5 faz o array de histogramas de vivos
                }
            }
        }
    }

    for (i = 0; i < quantidade_passageiros; i++){
            for (j = 0; j < 7; j++){
                if (j == 1 || j == 5){
                    getchar();
                    scanf("%c", &letra);
                    switch(letra){
                        case 'm':
                            passageiros[i][j] = 0;
                            break;
                        case 'f':
                            passageiros[i][j] = 1;
                            break;
                        case 'S':
                            passageiros[i][j] = 0;
                            break;
                        case 'C':
                            passageiros[i][j] = 1;
                            break;
                        case 'Q':  
                            passageiros[i][j] = 2;
                            break;
                    }
                }else{
                    scanf("%f", &passageiros[i][j]);
                }
            }
        }

        switch(tarefa){ //primeiro argumento é a variavel a ser usada e o segundo a função q será realizada
            case 0:
               criarHistograma(0, 3); //função 3 mostra o histograma de vivos e mortos de uma variavel
            break;

            case 1:
               criarHistograma(1, 3);
            break;

            case 2:
                criarHistograma(2, 3);
            break;
                
            case 3:
                criarHistograma(3, 3);
            break;

            case 4:
                criarHistograma(4, 3);
            break;

            case 5:
                criarHistograma(5, 3);
            break;

            case 6:
                criarHistograma(6, 3);
            break;

            case 7:
                criarHistograma(7, 100); //função -1 não vai fazer nada
            break;
        }

    return 0;
}