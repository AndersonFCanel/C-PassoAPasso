#include <stdio.h>
#include <stdlib.h>

/*A utiliza��o de ponteiros em linguagem C � uma das caracter�sticas que tornam a linguagem t�o flex�vel e poderosa.

Ponteiros ou apontadores, s�o vari�veis que armazenam o endere�o de mem�ria de outras vari�veis.

Dizemos que um ponteiro �aponta� para uma var��vel quando cont�m o endere�o da mesma.

Os ponteiros podem apontar para qualquer tipo de vari�vel. Portanto temos ponteiros para int, float, double, etc.

Por que usar ponteiros?

Ponteiros s�o muito �teis quando uma vari�vel tem que ser acessada em diferentes partes de um programa.

Neste caso, o c�digo pode ter v�rios ponteiros espalhados por diversas partes do programa, �apontando� para a vari�vel que cont�m o dado desejado.

Caso este dado seja alterado, n�o h� problema algum, pois todas as partes do programa tem um ponteiro que aponta para o endere�o onde reside o dado atualizado.

Existem v�rias situa��es onde ponteiros s�o �teis, por exemplo:

    Aloca��o din�mica de mem�ria
    Manipula��o de arrays.
    Para retornar mais de um valor em uma fun��o.
    Refer�ncia para listas, pilhas, �rvores e grafos.

Sintaxe de declara��o de ponteiro

tipo *nome_ponteiro;

Onde temos:

tipo : � o tipo de dado da vari�vel cujo endere�o o ponteiro armazena.

*nome_ponteiro : O nome da vari�vel ponteiro.

O asterisco * neste tipo de declara��o determina que a vari�vel ser� um ponteiro.

Exemplo de declara��o de ponteiro:*/

#include <stdio.h>
#include <conio.h>

int main(void)
{
   //valor � a vari�vel que
   //ser� apontada pelo ponteiro
   int valor = 27;

   //declara��o de vari�vel ponteiro
   int *ptr;

   //atribuindo o endere�o da vari�vel valor ao ponteiro
   ptr = &valor;

   printf("Utilizando ponteiros\n\n");
   printf ("Conteudo da variavel valor: %d\n", valor);
   printf ("Endere�o da variavel valor: %x \n", &valor);
   printf ("Conteudo da variavel ponteiro ptr: %x", ptr);

   getch();
   return(0);
}


/*Explica��o detalhada do c�digo

//valor � a vari�vel que ser� apontada pelo ponteiro
int valor = 27;

//declara��o de vari�vel ponteiro
int *ptr;

Note que foi usado o operador * para designar que a vari�vel ptr � um ponteiro. Como a inten��o � armazenar o endere�o da vari�vel denominada valor que � uma vari�vel do tipo int, o ponteiro tamb�m tem que ser do tipo int. Isto significa que vai apontar para uma vari�vel do tipo inteiro.

//atribuindo o endere�o de valor ao ponteiro
ptr = &valor;

Para atribuir o endere�o da vari�vel valor ao ponteiro ptr utilizamos o operador de endere�o &, pois estamos nos referindo ao endere�o da vari�vel valor e n�o ao conte�do da mesma.

   printf("Utilizando ponteiros\n\n");
   printf ("Conteudo da variavel valor: %d\n", valor);
   printf ("Endere�o da variavel valor: %x \n", &valor);
   printf ("Conteudo da variavel ponteiro ptr: %x", ptr);

Foi utilizado %x para exibir o endere�o e o conte�do do ponteiro ptr, pois trata-se de um valor hexadecimal por ser endere�o de mem�ria. */
