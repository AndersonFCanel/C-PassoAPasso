#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num=1,cont=1,resut=1;
	
	
	for(cont=1;cont<=10;cont++){
		printf("\n------------");
		for(num=1;num<=10;num++){
		printf("\n %d * %d = %d",num,cont,resut=(num*cont));
		
	}
	}
	return 0;
}
/* var
mult, num: inteiro
inicio
// Seção de Comandos )
mult<-1
enquanto mult<=10 faca
   NUM<-1
   escreval
   ENQUANTO num<=10 FACA
      escreval(mult," x ",num," = ",num*mult)
      num<-num+1
   fimenquanto
   mult<-mult+1
   fimenquanto
fimalgoritmo */
