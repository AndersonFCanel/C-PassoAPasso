#include<stdio.h>
#include<conio.h>
int main (void )
{
  int a,b;
  printf("\n\n******************* Entrada de Dados ********************* \n\n");
  printf("Digite a quantidade de linhas e colunas que deseja que a matriz tenha : ");
  printf("LINHAS: ";)
  scanf("%d",&a);
  printf("COLUNAS: ");
  scanf("%d",&b);
  printf("Matriz de:\n%d LINHAS \n%d COLUNAS\n",a,b);

  int matriz[a][b];//Matriz
  int i, j; //Indíces linha e coluna.
  a--;
  b--;
  printf ("\nDigite o valor para os elementos da matriz: \n\n");

  for ( i=0; i<=a||i<=b; i++ )
    for ( j=0;j<=a||j<=b; j++ )
    {
       printf ("\nElemento Linha x Coluna[%d][%d] = ", i+1, j+1);
       scanf ("%d", &matriz[ i ][ j ]);
       i-1;
       j-1;
    }

   printf("\n\n******************* Saida de Dados ********************* \n\n");

   for ( i=0; i<=a||i<=b; i++ ){
    for ( j=0; j<=a||j<=b; j++ )
    {
       printf ("\nElemento[%d][%d] = %d\t", i+1, j+1,matriz[ i ][ j ]);
       i-1;
       j-1;
	}
  }
  getch();
  return(0);
}

