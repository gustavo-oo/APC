#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Contato
{
    int id;
    char nome[50];
    int ano;
    int mes;
    int dia;
    char t_movel[12];
    char t_fixo[11];
    char email[100];
} CONTATO_T;


char readchar()
{
    char c;
    do
    {
        c = getchar();
    }
    while (c == '\n');
    return(c);
}

void imprimir_agenda(FILE *pFile)
{
    CONTATO_T c;
    int conta_registro = 0;

    while (fscanf(pFile,"%d %s %d %d %d %s %s %s", &c.id,c.nome,&c.dia,&c.mes,&c.ano,c.email,c.t_movel,c.t_fixo)!= EOF)
    {
        printf("\n\nContato [%d]\nNome: %s\nNascimento: %02d\\%02d\\%04d\nEmail: %s\nMovel: %s\t Fixo: %s", c.id,c.nome,c.dia,c.mes,c.ano,c.email,c.t_movel,c.t_fixo);
        conta_registro++;
    }

    if (conta_registro ==0)
        printf("\nAGENDA VAZIA\n");
}

void inserir_contato(FILE *pFile)
{
    CONTATO_T c;

    while (fscanf(pFile,"%d %*s %*d %*d %*d %*s %*s %*s", &c.id)!= EOF);
    scanf("%s %d %d %d %s %s %s", c.nome, &c.dia, &c.mes, &c.ano, c.email, c.t_movel, c.t_fixo);
    fprintf(pFile, "%d %s %d %d %d %s %s %s\n", c.id+1, c.nome, c.dia, c.mes, c.ano, c.email, c.t_movel, c.t_fixo);
}


void excluir_contato(FILE *pFile)
{   
    FILE *fp;
    CONTATO_T c;
    int indice;
    
    fp = fopen("temp.dat", "w");
    scanf("%d", &indice);

    while (fscanf(pFile, "%d %s %d %d %d %s %s %s", &c.id, c.nome, &c.dia, &c.mes, &c.ano, c.email, c.t_movel, c.t_fixo)!= EOF){
        if (indice != c.id){
            fprintf(fp, "%d %s %d %d %d %s %s %s\n", c.id, c.nome, c.dia, c.mes, c.ano, c.email, c.t_movel, c.t_fixo);
        }
    }

    fclose(fp);
    rename("temp.dat","agenda.dat");

}

void editar_contato(FILE * pFile)
{
    FILE *fp;
    CONTATO_T c, digitado;
    int indice;
    
    fp = fopen("temp.dat", "w");
    scanf("%d %s %d %d %d %s %s %s", &digitado.id, digitado.nome, &digitado.dia, &digitado.mes, &digitado.ano, digitado.email, digitado.t_movel, digitado.t_fixo);

    while (fscanf(pFile, "%d %s %d %d %d %s %s %s", &c.id, c.nome, &c.dia, &c.mes, &c.ano, c.email, c.t_movel, c.t_fixo)!= EOF){
        if (digitado.id != c.id){
            fprintf(fp, "%d %s %d %d %d %s %s %s\n", c.id, c.nome, c.dia, c.mes, c.ano, c.email, c.t_movel, c.t_fixo);
        }else{
            fprintf(fp, "%d %s %d %d %d %s %s %s\n", digitado.id, digitado.nome, digitado.dia, digitado.mes, digitado.ano, digitado.email, digitado.t_movel, digitado.t_fixo);   
        }
    }

    fclose(fp);
    rename("temp.dat","agenda.dat");
}

void buscar_contato(FILE * pFile)
{
    CONTATO_T c;
    char nome[50];
    int encontrado = 0;

    scanf("%s", nome);
    while (fscanf(pFile, "%d %s %d %d %d %s %s %s", &c.id, c.nome, &c.dia, &c.mes, &c.ano, c.email, c.t_movel, c.t_fixo)!= EOF){
        if (!strcmp(nome, c.nome)){
            encontrado++;
            break;
        }
    }
    if (encontrado){
        printf("\n\nContato [%d]\nNome: %s\nNascimento: %02d\\%02d\\%04d\nEmail: %s\nMovel: %s\t Fixo: %s", c.id, c.nome, c.dia, c.mes, c.ano, c.email, c.t_movel, c.t_fixo);
    }else{
        printf("\nCONTATO NAO ENCONTRADO");
    }
}

int main()
{
    int opcao = 0;
    FILE * pFileAgenda;

    while (1)
    {
        printf("\n\n");
        printf("\n\nMENU DE OPERACOES NA AGENDA\n\n");
        printf("(1) Imprimir agenda\t\t(2) Inserir contato\n\n");
        printf("(3) Excluir contato\t\t(4) Editar contato\n\n");
        printf("(5) Buscar contato\t\t(6) Sair do programa\n\n\n");

        pFileAgenda = fopen("agenda.dat", "r+");
        if (pFileAgenda == NULL)
        {
            pFileAgenda = fopen("agenda.dat", "w+");
            if (pFileAgenda == NULL)
            {
                printf("Problemas com a abertura do arquivo de dados da agenda");
                exit(0);
            }
        }

        do
        {
            printf("Digite a opcao desejada: ");
            opcao = readchar();
            if (feof(stdin)) break;
        }
        while (opcao < '1'  ||  opcao > '6');

        if (feof(stdin))
        {
            printf("EOF encontrado. Saindo ...\n\n\n");
            break;
        }

        switch (opcao)
        {
        case '1':
            imprimir_agenda(pFileAgenda);
            break;
        case '2':
            inserir_contato(pFileAgenda);
            break;
        case '3':
            excluir_contato(pFileAgenda);
            break;
        case '4':
            editar_contato(pFileAgenda);
            break;
        case '5':
            buscar_contato(pFileAgenda);
            break;
        case '6':
            break;
        default:
            break;
        }

        if (opcao == '6')
        {
            printf("O usuario pediu para sair do programa. Saindo ...\n\n\n");
            break;
        }
        fclose(pFileAgenda);
    }

    exit(0);
}
