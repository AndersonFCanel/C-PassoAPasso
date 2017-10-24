
#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    int num,prod=1,i;
    
    for(i=1;i<=21;i++){
    	
    	printf("Digite um numero: \n");
        scanf("%d",&num);
        
	    prod=prod*num;
        printf("-->>%d\n ",prod);
        if(prod==0){
        	prod=1;
		}
        
    
	}  
	return 0;

}
