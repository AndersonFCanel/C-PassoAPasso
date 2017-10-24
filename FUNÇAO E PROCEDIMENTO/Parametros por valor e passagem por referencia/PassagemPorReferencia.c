
#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b);
/*nesse caso n�o s�o passados valores das vari�veis para a fun��o
,mas somente suas refer�ncias, e a fun��o usa refer�nciaas para
alterar os valores fora da fun��o. */
// Isso � util quando n�o queremos alterar os valores dos par�metros formais dento da fun��o
//em C somente usa chamadas por valor
//O recurso para simular chamada por referencia � que usamos � a utiliza��o de ponteiros , vide exemplo:
void main(void)
{
 int num1,num2;
 num1=100;
 num2=200;
 printf("Antes da passagem de valor por Referencia: \nnum1 vale: %d \n num2 vale:%d\n ",num1,num2);
 swap(&num1,&num2);
 printf("Depois da passgem:\nnum1 vale: %d \n num2 vale:%d\n ",num1,num2);
}
void swap(int *a,int *b){
int temp;
temp=*a;
*a=*b;
*b=temp;
}
