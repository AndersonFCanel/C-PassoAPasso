 #include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int i,n,j,soma=0;

	printf("Digite a quantidade de Linhas: ");
	scanf("%d",&n);

	for (i =1; i<= n;i++){
	    if(i ==1){
        printf("%d \n",i);
          }else{
               for(j=0;j<i;j++){
                 if(j==0){
                   printf("%d ",i);
                   soma=i+i;
                 }else{
               printf("%d ",soma);
            soma=soma+i;
                    }
               }
               printf("\n");
            }
   }
return 0;

}
