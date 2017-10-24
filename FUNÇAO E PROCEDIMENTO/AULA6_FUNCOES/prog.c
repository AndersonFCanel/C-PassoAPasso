#include <stdio.h>
#include <stdlib.h>
#include "func.h"


void main(){
	int resultado,x,y;
	char opcao;	
	
	do {
		system("cls");
		imprimeMenu();
		printf("Escolha uma opcao: ");
		opcao = getche();
		if(opcao=='1'){
			printf("\nEntre com o valor de x: ");
			scanf("%d",&x);
			resultado = f(x);
			printf("f(%d) = %d",x,resultado);
			getch();
		}
	
		else if(opcao=='2'){
			printf("\nEntre com o valor de x: ");
			scanf("%d",&x);
			printf("Entre com o valor de y: ");
			scanf("%d",&y);
			resultado = g(x,y);
			printf("g(%d,%d) = %d",x,y,resultado);
			getch();
		}
	} while (opcao!=27);


	
}


