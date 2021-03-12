#include <stdio.h>

//struct
struct bilhete {
    int horarioEntrada, horarioSaida;
    int minEntrada, minSaida, horaEntrada, horaSaida;
    int preco;
};

//funções
void extrairHoraMin(struct bilhete * bilhetes){
    bilhetes -> minEntrada = bilhetes -> horarioEntrada % 100;
    bilhetes -> minSaida = bilhetes -> horarioSaida % 100;

    bilhetes -> horaEntrada = bilhetes -> horarioEntrada/100;
    bilhetes -> horaSaida = bilhetes -> horarioSaida/100;
}

int obterIntervalo(struct bilhete bilhetes){
    int intervalo;
    intervalo = (bilhetes.horaSaida*60 + bilhetes.minSaida) - (bilhetes.horaEntrada*60 + bilhetes.minEntrada);
    return intervalo;
}

int obterValorEstacionamento(int intervalo){
    int preco = 0;

    if (intervalo <= 15){
        preco = 0;
    }else{
        if (intervalo <= 60){
            preco = (intervalo)*30;
        }else{
            if (intervalo <=120){
                preco = (intervalo - 60)*20 + 1800;
            }else{
                preco = (intervalo - 120)*10 + 3000;
            }
        }
    }
    return preco;
}

int main()
{
    struct bilhete bilhetes[100];
    int contaCentavos, intervalo, receita=0;
    int contadorCarros=0, i, total=0;

    scanf("%d", &bilhetes[contadorCarros].horarioEntrada);
    while (bilhetes[contadorCarros].horarioEntrada>=0)
    {
        do
        {
            scanf("%d", &bilhetes[contadorCarros].horarioSaida);
        }
        while(bilhetes[contadorCarros].horarioSaida < bilhetes[contadorCarros].horarioEntrada);

        extrairHoraMin(&bilhetes[contadorCarros]);
        intervalo = obterIntervalo(bilhetes[contadorCarros]);
        contaCentavos = obterValorEstacionamento(intervalo);
        bilhetes[contadorCarros].preco = contaCentavos;
        printf("Entrada\n%02d:%02d\nSaida\n%02d:%02d\nDuracao(min)\n%d\nPreco(centavos)\n%d\n",bilhetes[contadorCarros].horaEntrada, bilhetes[contadorCarros].minEntrada, bilhetes[contadorCarros].horaSaida, bilhetes[contadorCarros].minSaida,intervalo, bilhetes[contadorCarros].preco);
        total += contaCentavos;
        contadorCarros++;
        scanf("%d", &bilhetes[contadorCarros].horarioEntrada);
    }

    printf("Faturamento total (centavos)\n%d\n", total);

    int inicioIntervalo, finalIntervalo;
    scanf("%d", &inicioIntervalo);
    do
    {
        scanf("%d", &finalIntervalo);
    }
    while (finalIntervalo  < inicioIntervalo);

    for (i = 0; i < contadorCarros ; i++)
    {
        if (bilhetes[i].horarioSaida>inicioIntervalo && bilhetes[i].horarioSaida< finalIntervalo)
        {
            receita += bilhetes[i].preco;
        }
    }

    printf("\nFaturamento no periodo (centavos)\n%d\n", receita);

    return 0;
}
