#include <stdio.h>

//declaração das funções usadas
void lerDados(char tipo);
void validarDatas();
int calcularDias();

//criei arrays globais porque eu não sei passar array como referencia para outra função
int data_nascimento[3], data_atual[3]; 

int main(){
    int dias;
    lerDados('n'); //cria um array com a data de nascimento
    lerDados('a'); //cria um array com a data atual
    validarDatas(); //compara o ano das datas e valida a entrada do ano
    dias = calcularDias(); //calcula a quantidade de dias de vida
    printf("%d\n", dias);
    return 0;
}


void lerDados(char tipo){ 
    //cria 2 arrays, um para a data de nascimento e outro para a data atual
    int i;
    int limite;
    for (i = 0; i < 3; i++){
        switch(i){
            case 0:
                limite = 30;
                break;

            case 1:
                limite = 12;
                break;

            case 2:
                limite = 2019;
                break;
        }
        switch(tipo){
            case 'n': //nascimento
                do{
                    scanf("%d", &data_nascimento[i]);
                }while(data_nascimento[i] <= 0 || data_nascimento[i] > limite);
                break;

            case 'a': //atual
                do{
                    scanf("%d", &data_atual[i]);
                }while(data_atual[i] <= 0 || data_atual[i] > limite);
                break;
        }
    }
}

void validarDatas(){
    //compara o ano atual com o ano de nascimento -> não podem ser iguais
    while (data_atual[2] - data_nascimento[2] <= 0){ 
        scanf("%d", &data_atual[2]);
    }
}

int calcularDias(){
    /*calcula a quantidade de dias do ano 0 até a data atual,
    calcula a quantidade de dias do ano 0 até a data de nascimento
    e subtrai os dois
    */
    int dias;
    dias = (data_atual[0] + (data_atual[1] - 1) * 30 + (data_atual[2] - 1) * 12 * 30) -  
    (data_nascimento[0] + (data_nascimento[1] - 1) * 30 + (data_nascimento[2] - 1) * 12 * 30); 
    return dias; 
} 