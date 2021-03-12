#include <stdio.h>
#include <stdlib.h>
#define MAX 9

void trocaDiagonal(int M[MAX][MAX]){
    int l, c;

    for (l = 0; l < MAX; l++){
        for (c = 0; c < MAX; c++){
            if (c == l && c != (int) MAX / 2){
                M[l][c] += M[l][MAX-1-l];
                M[l][MAX-1-l] = M[l][c] - M[l][MAX-1-l];
                M[l][c] -= M[l][MAX-1-l];
            }
        }
    }
}

int main()
{
  int M[MAX][MAX];
  int l, c;

  for(l=0;l<MAX;l++)
    for(c=0;c<MAX;c++)
       scanf("%d",&M[l][c]);

  trocaDiagonal(M);
  printf("\n");

  for(l=0;l<MAX;l++)
  {
    for(c=0;c<MAX;c++)
      printf("%d ",M[l][c]);
    printf("\n");
  }

  return 0;
}
