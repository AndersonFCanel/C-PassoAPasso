#include <stdio.h>
#include <stdlib.h>

int valor; //variavel global

int main()
{
	
   valor =10; // variavel global recebendo atribuição
   printf("\n%d\n",valor);
   
   int valor = 20;//variavel local sendo declarada e recebendo atribuição
   printf("\n%d\n",valor);
   system("pause");
    return valor;
}
