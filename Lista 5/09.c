#include <stdio.h>
#include <math.h>

//suas structs
typedef struct ponto{
    int x, y;
    double raio;

}pontos;

//cálculo da distância (pode ser modificado para suas structs)
double distance(struct ponto a,struct ponto b){
	return hypot(a.x-b.x,a.y-b.y);
}

int main(){
    int i;
    pontos celular, torres[3];

    scanf("%d %d", &celular.x, &celular.y);
    for (i = 0; i < 3; i++){
        scanf("%lf %d %d", &torres[i].raio, &torres[i].x, &torres[i].y);
    }

    if ( distance(torres[0], celular) < torres[0].raio && distance(torres[1], celular) < torres[2].raio && distance(torres[2], celular) < torres[2].raio){
        printf("Celular encontrado\n");
    }else{
        printf("Nao foi possivel encontrar\n");
    }
 return 0;
}
