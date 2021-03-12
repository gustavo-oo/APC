#include <stdio.h>
int main(){
    int codigo;

    void estado(char nome[], char sigla[], char capital[], char regiao[]){
        printf("Nome: %s\nSigla: %s\nCapital: %s\nRegiao: %s\n", nome, sigla, capital, regiao);
    }

    scanf("%d", &codigo);
    switch(codigo){
        case 1:
            estado("ACRE","AC","RIO BRANCO","NORTE");
            break;
        case 2:
            estado("ALAGOAS","AL","MACEIO","NORDESTE");
            break;
        case 3:
            estado("AMAPA","AP","MACAPA","NORTE");
            break;
        case 4:
            estado("AMAZONAS","AM","MANAUS","NORTE");
            break;
        case 5:
            estado("BAHIA","BA","SALVADOR","NORDESTE");
            break;
        case 6:
            estado("CEARA","CE","FORTALEZA","NORDESTE");
            break;  
        case 7:
            estado("ESPIRITO SANTO","ES","VITORIA","SUDESTE");
            break;
        case 8:
            estado("GOIAS","GO","GOIANIA","CENTRO-OESTE");
            break;
        case 9:
            estado("MARANHAO","MA","SAO LUIS","NORDESTE");
            break;
        case 10:
            estado("MATO GROSSO","MT","CUIABA","CENTRO-OESTE");
            break;
        case 11:
            estado("MATO GROSSO DO SUL","MS","CAMPO GRANDE","CENTRO-OESTE");
            break;
        case 12:
            estado("MINAS GERAIS","MG","BELO HORIZONTE","SUDESTE");
            break;
        case 13:
            estado("PARA","PA","BELEM","NORTE");
            break;
        case 14:
            estado("PARAIBA","PB","JOAO PESSOA","NORDESTE");
            break;
        case 15:
            estado("PARANA","PR","CURITIBA","SUL");
            break;
        case 16:
            estado("PERNAMBUCO","PE","RECIFE","NORDESTE");
            break;
        case 17:
            estado("PIAUI","PI","TERESINA","NORDESTE");
            break;
        case 18:
            estado("RIO DE JANEIRO","RJ","RIO DE JANEIRO","SUDESTE");
            break;
        case 19:
            estado("RIO GRANDE DO NORTE","RN","NATAL","NORDESTE");
            break;
        case 20:
            estado("RIO GRANDE DO SUL","RS","PORTO ALEGRE","SUL");
            break;
        case 21:
            estado("RONDONIA","RO","PORTO VELHO","NORTE");
            break;
        case 22:
            estado("RORAIMA","RR","BOA VISTA","NORTE");
            break;
        case 23:
            estado("SANTA CATARINA","SC","FLORIANOPOLIS","SUL");
            break;
        case 24:
            estado("SAO PAULO","SP","SAO PAULO","SUDESTE");
            break;
        case 25:
            estado("SERGIPE","SE","ARACAJU","NORDESTE");
            break;
        case 26: 
            estado("TOCANTINS","TO","PALMAS","NORTE");
            break;
        case 27:
            estado("DISTRITO FEDERAL","DF","BRASILIA","CENTRO-OESTE");
            break;
        default:
            printf("INEXISTENTE\n");
            break;
        }
    return 0;
}