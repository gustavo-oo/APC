#include <stdio.h>
#include <math.h>


/* Crie suas funções, structs ou qualquer elemento que desejar dentro da área de edição na main()
ou fora da main porém sem alterar nenhuma outra função dada */

typedef struct {
    int x, y;
}ponto;

struct Triangle{
    ponto a, b,c;
}my_tri;

//Nao altere essa função
double area(struct Triangle t){
	return 0.5*fabs(t.a.x*(t.b.y-t.c.y) + t.b.x*(t.c.y-t.a.y) + t.c.x*(t.a.y-t.b.y));
}
int main(){

	/*inicio da area editavel */
    int i;
    
    scanf("%d %d", &my_tri.a.x, &my_tri.a.y);
    scanf("%d %d", &my_tri.b.x, &my_tri.b.y);
    scanf("%d %d", &my_tri.c.x, &my_tri.c.y);
    
	/*fim da area editavel */
	double resp  = area(my_tri);
	if(!resp)printf("Nao e um triangulo\n");
	else printf("A area do triangulo e %.2lf\n", resp);
 return 0;
}
