#include <cstdlib>
#include <iostream>
#include "pontos.h"

using namespace std;
/*

   Uma classe filha pode fornecer uma outra implementação para uma função membro 
   herdada, caracterizando uma redefinição "overriding" de função membro. 
   Importante: a função membro deve ter a mesma assinatura (nome, argumentos e 
   valor de retorno), senão não se trata de uma redefinição e sim sobrecarga 
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
