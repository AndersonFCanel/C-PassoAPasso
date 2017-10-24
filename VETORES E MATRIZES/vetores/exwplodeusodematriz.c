#include<stdio.h>
#include<conio.h>
int main (void )
{
  int matriz[2][2],i, j;

  printf ("\nDigite valor para os elementos da matriz\n\n");

  for ( i=0; i<3; i++ )
    for ( j=0; j<3; j++ )
    {
       printf ("\nElemento[%d][%d] = ", i, j);
       scanf ("%d", &matriz[ i ][ j ]);
    }

   printf("\n\n******************* Saida de Dados ********************* \n\n");

   for ( i=0; i<3; i++ )
    for ( j=0; j<3; j++ )
    {
       printf ("\nElemento[%d][%d] = %d\n", i, j,matriz[ i ][ j ]);
    }

  getch();
  return(0);
}


/*Programa usando matrizes em linguagem C


O que é uma matriz?

Matriz é a uma estrutura de dados do tipo vetor com duas ou mais dimensões.

Os itens de uma matriz tem que ser todos do mesmo tipo de dado.

Na prática, as matrizes formam tabelas na memória.
Matriz em linguagem C

Exemplo de declaração de matriz com 2 dimensões usando linguagem C

float Media[5][2];

Onde:

    O valor 5 representa a quantidade de linhas.
    O valor 2 representa a quantidade de colunas.

Dizemos que esta matriz é do tipo 5 X 2.

Como temos 5 linhas com 2 posições de armazenamento em cada linha, temos capacidade para armazenar até 10 elementos (itens) do tipo float.

Será necessário utilizar um índice para cada dimensão da matriz, logo uma matriz bidimensional terá 2 índices, um para posicionar a linha, outro para a coluna.

Assim, como no vetor, o índice da primeira posição é zero.
Como atribuir valores a uma matriz?

Suponha a matriz como declarada:

float Media[5] [2];

para atribuir uma valor precisamos identificar a posição usando os índices:

Media [0][0] = 5;

//Atribui o valor 5 na primeira linha e primeira coluna.

Media [1][0] = 7;
// Atribui o valor 7 na segunda linha, primeira coluna.
Preenchendo uma matriz

Para fazer o preenchimento de uma matriz, devemos percorrer todos os seus elementos e atribuir-lhes um valor.

Isto pode ser feito tanto gerando valores para cada elemento da matriz, como recebendo os valores pelo teclado.

Um método interessante para percorrer uma matriz é usar duas estruturas de repetição for e duas variáveis inteiras, uma para a linha e a outra para a coluna.

Exemplo:

Suponha uma matriz de 3 linhas por 3 colunas do tipo inteiro.

Para percorrer a matriz recebendo seus valores, podemos fazer:

for ( i=0; i<3; i++ )
  for ( j=0; j<3; j++ )
  {
     scanf ("%d", &matriz[ i ][ j ]);
  }

Neste trecho de código, a variável i representa a linha e j a coluna da matriz.

Usando as repetições, percorremos cada posição da matriz e recebemos um valor usando scanf();
Mostrando os elementos de uma matriz

Para mostrar os elementos de uma matriz, podemos usar o mesmo método, porém usamos o comando de saída printf().

for ( i=0; i<3; i++ )
  for ( j=0; j<3; j++ )
  {
     printf ("%d", matriz[ i ][ j ]);
  }

Exemplo:

Programa em C que preenche uma matriz com 3 linhas X 3 colunas e depois mostra os dados recebidos.

 EXEMPLO CITADO ACIMA.

Utilizamos um par de estruturas de repetição for para primeiramente fazer a leitura dos valores da matriz.

Fixamos a linha, ou seja, o índice i enquanto o índice da coluna j varia até preencher todos os elementos da linha.

Depois que uma linha é preenchida, o índice da linha é incrementado e recomeça o preenchimento da coluna por coluna com o loop for interno controlado pelo índice j.

A saída de dados usa o mesmo princípio para percorrer a matriz e exibir os dados.
Até a próxima!*/
