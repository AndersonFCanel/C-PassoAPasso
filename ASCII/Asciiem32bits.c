#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char letra,caracter;
	int  num;
	
	system("color F1");
	
	printf("Digite uma letra que deseja ver em ASCII: ");
	letra=getche();
	printf("\nO codico ASCII do Caracter %c e: %d",letra,letra);
	///////OUTRA FORMA DE FAZER:::::>>>>>
	printf("\n\nDigite outro caracter: ");
	caracter=getch();
	printf("\nO caracter (%c) em ASCII e %d",caracter,caracter);
	//////TRATANDO ENTER E ESC:::::::
	
	if((caracter==13)||(caracter==27)){
	printf("\nVocê digitou ENTER OU ESC!!!");
    }
	printf("\n");
	
	for(letra='a';letra<='z';letra++){
		getch();
		printf("\nO correspondente em ASCII da letra %c e:  %d ",letra,letra);
	}
	printf("\n\n\n");
	for(num=0;num<=250;num++){
		getch();
		printf("\nO correspondente em ASCII do número %d e: %c",num,num);
	}
	getch();
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
