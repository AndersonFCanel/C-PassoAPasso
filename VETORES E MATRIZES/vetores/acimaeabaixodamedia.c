
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	float notas[11];
	int i;
   float acimadamedia[11],am, abaixodamedia[11],abm;

	 for(i=1;i<=10;i++){
	 	printf("Entre com valor do notas do aluno n° %d ",i);
	 	scanf("%f",&notas[i]);

        if(notas[i]>=6){
	 	acimadamedia[i]=notas[i];
	 	}else
	 	    if (notas[i]<6){
	 	abaixodamedia[i]=notas[i];}
	 	    }




	 for(i=1;i<=10;i++){
           if(acimadamedia[i]>=6){
	 	printf("\nAcima da media:--%.2f",acimadamedia[i]);
	 	  }
      }
      for(i=1;i<=10;i++){
	 	    if (abaixodamedia[i]<6){
	 	printf("\nAbaixo da media:--%.2f",abaixodamedia[i]);
	 	}
      }

	return 0;
}
