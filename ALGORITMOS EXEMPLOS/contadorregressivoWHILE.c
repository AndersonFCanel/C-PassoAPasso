#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num=100;
	
	printf("Pressione qualquer tecla para imprimir a contagem decrescente.\n");
	getch();
	
	 do{
		printf("%d ",num);
		num--;
	}while(num>=1);
	
	printf("\n AGORA USANDO ESTRUTURA FOR: \n");
	getch();
	num=100;
    for(num;num>=1;num--){
    	printf("%d ",num);
	}
	
	
		
	return 0;
}
