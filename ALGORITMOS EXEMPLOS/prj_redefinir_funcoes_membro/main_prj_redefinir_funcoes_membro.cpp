#include <cstdlib>
#include <iostream>
#include "pontos.h"

using namespace std;
/*

   Uma classe filha pode fornecer uma outra implementa��o para uma fun��o membro 
   herdada, caracterizando uma redefini��o "overriding" de fun��o membro. 
   Importante: a fun��o membro deve ter a mesma assinatura (nome, argumentos e 
   valor de retorno), sen�o n�o se trata de uma redefini��o e sim sobrecarga 
   "overloading".
   Implementado Por: Rafael Bortoletto Maman
   
 */  

int main(int argc, char *argv[])
{
     ponto_reflete p1(3.14,2.17);

     p1.reflete();

     cout << "P1";

     p1.mostra();

     ponto_move p2(1.0,1.0);

     p2.move(.5,.5);

     cout << "P2";

     p2.mostra();
        
    system("PAUSE");
    return EXIT_SUCCESS;
}
