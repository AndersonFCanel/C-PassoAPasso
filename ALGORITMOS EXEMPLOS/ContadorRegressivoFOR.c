#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,num1;
	char op;
	
	printf("Pressione qualquer tecla para imprimir a contagem decrescente.\n ESC para sair:  \n ");
	getch();
	for(num=0;op!=27;num--){
		op=getch();
		printf("%d ",num);
		}
		num=100;
		////OUTRA FORMA
		
return 0;
}
