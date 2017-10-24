#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,maisquedois;
	char menosquedois[20], bb[20];
	
	printf("Tente acertar o numero magico");
	printf("\nDigite um numero:  __");
	scanf("%d",&a);
	
	strcpy(menosquedois,"PEREDEU!!!\n");
	
	//abaixo estrutura de comparação simplificada  do tipo ()?():()
	(a>=2)?(maisquedois=a):(printf("Voce errou"));//se a maior que dois ?então  maiquedois recebe o valor armazenado em a  :senão  imprime a string menosquedois
	 ///retornara algum valor
	 
	 if(a>=2){
     	printf("\n%d é maior que dois ,parabenws!!! ",maisquedois);
       } else if(a<=1){
	  printf("\nvoce digitou um numero menor que 2... o número %d faz o programa  te retornar::::: %s",a,menosquedois);// para chamar a string sempre usar %s
	  strcpy(bb,"  De NOVOOOOO");//função usada para copiar um valor para uma string
	  strcat(menosquedois,bb);//função utilizada para concatenar duas strings
	  puts(menosquedois);//função utilizada para imprimir uma string
	}
	
	return 0;
}
