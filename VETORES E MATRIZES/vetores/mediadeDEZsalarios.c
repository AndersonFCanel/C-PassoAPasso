
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	float salario[11];
	float media=0;
	int i;


	 for(i=1;i<=10;i++){
	 	printf("Entre com valor do salario do funcionario n° %d ",i);
	 	scanf("%f",&salario[i]);

        media=(salario[i]+media);

   }

	 for(i=1;i<=10;i++){
	 	printf("\n%d--%.2f",i,salario[i]);
	 }

	 system("cls");
	 printf("\nA media dos salarios e: %.2f",media/10);

	return 0;
}
