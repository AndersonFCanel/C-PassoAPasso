#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int num,maior,menor,i,aux;
    
    
    printf("Digite um numero: \n");
        scanf("%d",&num);
        
		maior=num;
    	menor=num;
    
    for(i=1;i<=19;i++){
    	
    	printf("Digite um numero: \n");
        scanf("%d",&num);     
    	 if(num>=maior){
    	 	maior=num;
		 }
		if(num<=menor){
			menor=num;
	    }
		
    
	}  
	printf("\nO menor é %d.\n",menor);
	printf("\nO maior é %d.",maior);
	return 0;

}
