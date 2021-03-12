#include <stdio.h>

int main(){
    char nomes[10][50]; //array de strings(50 caracteres) com 10 nomes
    int dados[10][23];
    int i, j, tarefa, media;
    float afinidade;

    scanf("%d", &tarefa);

    for (i = 0; i < 10; i++){
        for (j = 0; j < 23; j++){
           scanf("%d", &dados[i][j]); 
        }
        scanf("%s", nomes[i]);
    }

    switch(tarefa){
        case 1:
            for (i = 1; i < 10; i++){
                printf("%s:", nomes[i]);
                for (j = 0; j < 23; j++){
                    switch(dados[i][j]){
                        case 1:
                            printf(" F");
                            break;
                        case -1:
                            printf(" C");
                            break;
                        case 0:
                            printf(" N");
                            break;
                    }
                }
                printf("\n");
            }
            break;

            case 2:
                for (i = 1; i < 10; i++){
                    afinidade = 0;
                    for (j = 0; j < 23; j++){
                        if (dados[0][j] == 0 || dados[i][j] == 0){
                            afinidade += 0.5;
                        }else{
                            if(dados[0][j] == dados[i][j]){
                                afinidade += 1;
                            }
                        }
                    }
                    printf("%s: %.0f%%\n", nomes[i], 100*afinidade/23);
                }
                break;

            case 3:
            printf("Ordinario:");
                for (j = 0; j < 23; j++){
                    media = 0;
                    for (i = 1; i < 10; i++){
                        media += dados[i][j];
                    }
                    if (media > 0){
                        printf(" 1");
                    }else{
                        if (media < 0){
                            printf(" -1");
                        }else{
                            printf(" 0");
                        }

                    }  
                }
                printf("\n");
                break;
    }
    
    return 0;
}