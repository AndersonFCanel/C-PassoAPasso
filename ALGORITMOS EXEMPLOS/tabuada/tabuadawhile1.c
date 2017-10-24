#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,cont=1,resut=1;
	printf("De qual numero deseja calcular a tabuada: ");
	scanf("%d",&num);
	
	while(cont<=10){
		printf("\n %d * %d = %d",num,cont,resut=(num*cont));
		cont++;
	}
	return 0;
}
