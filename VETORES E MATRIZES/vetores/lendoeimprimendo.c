#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int vetor[8],i;
	
	 for(i=1;i<=8;i++){
	 	scanf("%d",&vetor[i]);
   }
   
	 for(i=1;i<=8;i++){
	 	printf("\n%d--%d",i,vetor[i]);
	 }
	
	return 0;
}
