#include <stdio.h>
#include <math.h>

int main(){
    int k, i, j, y, quantidade_treinamento, quantidade_teste; //k, i, j, y variaveis auxiliares para o uso do for
    
    scanf("%d %d %d", &k, &quantidade_treinamento, &quantidade_teste);

    float  amostra_treinamento[quantidade_treinamento][4], amostra_teste[quantidade_teste][4];
    float media[4]= {0}, desvio_padrao[4] = {0};
    int rotulos_treinamento[quantidade_treinamento];
    float distancia[quantidade_teste][quantidade_treinamento];
    int indice_teste[quantidade_teste][quantidade_treinamento];
    int contador[3];
    float auxiliar;

    //ler as amostras de treinamento
    for (i = 0; i < quantidade_treinamento; i++){
        for (j = 0; j < 4; j++){
            scanf("%f", &amostra_treinamento[i][j]);
        }
    }
    //ler os rotulos de cada amostra de treinamento
    for (i = 0; i < quantidade_treinamento; i++){
        scanf("%d", &rotulos_treinamento[i]);
    }

    //normalização dos dados
    for (j = 0; j < 4; j++){
        //calcular a media de cada coluna
        for (i = 0; i < quantidade_treinamento; i++){
            media[j] += amostra_treinamento[i][j];
        }
        media[j] /= quantidade_treinamento;
    }
    for (j = 0; j < 4; j++){
        //calcular o desvio padrao de cada coluna
        for (i = 0; i < quantidade_treinamento; i++){
            desvio_padrao[j] += pow(media[j] - amostra_treinamento[i][j], 2) / quantidade_treinamento;
        }
        desvio_padrao[j] = sqrt(desvio_padrao[j]);
    }
    
    //normalizar as colunas(subtrair de cada elemento a media e dividir pelo desvio padrao)
    for (i = 0; i < quantidade_treinamento; i++){
        for ( j = 0; j < 4; j++){
            amostra_treinamento[i][j] = (amostra_treinamento[i][j] - media[j]) / desvio_padrao[j];
        }
    }
    
    //ler as amostras de teste
    for (i = 0; i < quantidade_teste; i++){
        for (j = 0; j < 4; j++){
            scanf("%f", &amostra_teste[i][j]);
        }
    }
    //normalizar as colunas(subtrair de cada elemento a media e dividir pelo desvio padrao)
    for (j = 0; j < 4; j++){
        for (i = 0; i < quantidade_teste; i++){
            amostra_teste[i][j] = (amostra_teste[i][j] - media[j]) / desvio_padrao[j];
        }  
    }  

    //inicializando a matriz de indices da amostra de testes
    for (i = 0; i < quantidade_teste; i++){
        for (j = 0; j < quantidade_treinamento; j++){
            indice_teste[i][j] = j;
        }
    }
  
    //inicializando a distancia com 0
    for (i = 0; i < quantidade_teste; i++){
        for (j = 0; j < quantidade_treinamento; j++){
            distancia[i][j] = 0;
        }
    }

    //calculando a distancia euclidiana entre uma amosta de testes e todas as amostras de treinamento
    for (i = 0; i < quantidade_teste; i++){
        for (y = 0; y < quantidade_treinamento; y++){
            for (j = 0; j < 4; j++){
                distancia[i][y] += pow(amostra_teste[i][j] - amostra_treinamento[y][j], 2);
            }
        }
        for (y = 0; y < quantidade_treinamento; y++){
            distancia[i][y] = sqrt( distancia[i][y] );
            
        }
    }
    //ordenando a matriz de distancias atraves do bubble sort
    for (i = 0; i < quantidade_teste; i++){
        for (j = 0; j < quantidade_treinamento; j++){
            for (y = 0; y < quantidade_treinamento - 1; y++){
                if (distancia[i][y] > distancia[i][y+1]){
                    
                    auxiliar = distancia[i][y];
                    distancia[i][y] = distancia[i][y+1];
                    distancia[i][y+1] = auxiliar;

                    //ordenando tbm a matriz de indices
                    auxiliar = indice_teste[i][y];
                    indice_teste[i][y] = indice_teste[i][y+1];
                    indice_teste[i][y+1] = auxiliar;
                }                    
            }
        }
    }

    for (i = 0; i < quantidade_teste; i++){
        //resetando o contador pra cada amostra de teste
        for ( y = 0; y < 3; y++){
            contador[y] = 0;
        }
        for (y = 0; y < k; y++){//olhando  a classe de flor que cada indice corresponde
            switch(rotulos_treinamento[indice_teste[i][y]]){
                case 0:
                    contador[0] += 1;
                    break;
                case 1:
                    contador[1] += 1;
                    break;
                case 2:
                    contador[2] += 1;
                    break;
            }
        }

        if (contador[0] > contador[1] && contador[0] > contador[2]){
            printf("0\n");
        }else{
            if(contador[1] > contador[2]){
                printf("1\n");
            }else{
                printf("2\n");
            }   
        } 
    }

    return 0;
}
