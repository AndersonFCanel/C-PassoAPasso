#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a=0,b=0,c=0,d=0,e=0,f=0,g=0,h=0,i=0,j=0;
	a=a+1;
	b=b-1;
	c++;
	d--;
	e+=2; //é o mesmo que >>> e=e+2
	f=6;  f/=2; //>>>f=f/2
	g=3; g*=3;
	
	h=5;  
	 5+(h++);
    i=5;   
	 5+(++i);   //vale o mesmo para subtração
	
	
	printf("\na-%d  b-%d  c-%d  d-%d  e-%d  f-%d  g-%d   h-%d  i-%d  ",a,b,c,d,e,f,g,h,i);
    printf("\nDigite um valor para variavel j: ");
    scanf("%d",&j);
    printf("O valor de J sem o incremento é : %i ",j);
    j+=2;  // incremento reduzido
    printf("Agora j passa a ter valor %d",j);
	return 0;
}
