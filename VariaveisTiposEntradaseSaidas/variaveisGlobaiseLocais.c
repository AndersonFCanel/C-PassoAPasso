#include <stdio.h>
#include <stdlib.h>

int valor; //variavel global

int main()
{
	
   valor =10; // variavel global recebendo atribui��o
   printf("\n%d\n",valor);
   
   int valor = 20;//variavel local sendo declarada e recebendo atribui��o
   printf("\n%d\n",valor);
   system("pause");
    return valor;
}
