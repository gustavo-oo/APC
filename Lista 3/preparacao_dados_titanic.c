#include <stdio.h>

int main(){
        int tarefa;
        int linhas;
        int i, j;
        char letra;
        float soma = 0;
        scanf("%d", &tarefa);
        scanf("%d", &linhas);
        float passageiros[linhas][6];

        for (i = 0; i < linhas; i++){
            for (j = 0; j < 6; j++){
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

        switch(tarefa){
            case 0:
                for (i = 0; i < linhas; i++){
                    for (j = 0; j < 6; j++){
                        printf("%.1f", passageiros[i][j]);
                        if (j < 5){ //o moodle não estava aceitando o espaço no final da linha
                            printf(" ");
                        }
                    }
                    printf("\n");
                }
                break;

            case 1:
                for (i = 0; i < linhas; i++){
                    if  ( ( (passageiros[i][2] > 15 && passageiros[i][2] <= 45) )|| ( (passageiros[i][0] > 1 && passageiros[i][1] == 1) ) ){
                        printf("Morreu");
                    }
                    else{
                        printf("Sobreviveu");
                    }
                    printf("\n");
                }
                break;
            
            case 2:
                for (j = 0; j < 6; j++){
                    soma = 0;
                    for (i = 0; i < linhas; i++){
                        soma += passageiros[i][j];   
                    }
                    printf("%.3f", soma / linhas);
                    if (j < 5){ //o moodle não estava aceitando o espaço no final da linha
                            printf(" ");
                        }
                }
                printf("\n");
                break;
        }
    return 0;
}
