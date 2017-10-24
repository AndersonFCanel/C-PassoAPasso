
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

    float numeros[11];
	int i;


	 for(i=1;i<=10;i++){
	 	printf("Entre com valor do numeros do funcionario n° %d ",i);
	 	scanf("%f",&numeros[i]);

     }

	 for(i=1;i<=10;i++){

	 	printf("\n%d--%.1f",i,numeros[i]/2);
	 }



	return 0;
}
