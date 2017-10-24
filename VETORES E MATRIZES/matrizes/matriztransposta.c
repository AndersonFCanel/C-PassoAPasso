#include <stdio.h>

void matriz_transposta (int l, int c, int matriz[l][c]) {
  int i, j, aux;

  for (i = 0; i < l; i++) {
    for (j = i+1; j < c; j++) {
      if (j != i) {
   aux = matriz[i][j];
   matriz[i][j] = matriz[j][i];
   matriz[j][i] = aux;
      }
    }
  }

  for (i = 0; i < l; i++) {
    for (j = 0; j < c; j++) {
      printf ("%d ",matriz[i][j]);
    }
    printf ("\n");
  }

}

main () {
  int l, c, i, j;

 printf("Digite a quantidade de Linhas e Colunas que a matriz possuira: ");
  scanf ("%d%d",&l, &c);

  int matriz[l][c];

  for (i = 0; i < l; i++) {
    for (j= 0; j < c; j++) {
      printf("Insira os valores na matriz seguindo a ordem linha x coluna");
      scanf ("%d",&matriz[i][j]);
    }
  }
  printf ("\n");

  matriz_transposta (l, c, matriz);

}
