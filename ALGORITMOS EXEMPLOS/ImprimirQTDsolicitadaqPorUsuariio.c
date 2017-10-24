#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char nome[20],nome2[20];
	int imp;
	
	printf("Digite um nome: ");
	gets(nome);
	printf("Digite outro nome: ");
	gets(nome2);
	
	
	printf("Digite a quantidade de vezes que deseja imprimir os nomes  na tela: ");
	scanf("%d",&imp);
	
   for(imp;imp>=1;imp--){
   	printf("\n%s",nome);
   	printf("\n%s",nome2);
   }
	
	return 0;
}
