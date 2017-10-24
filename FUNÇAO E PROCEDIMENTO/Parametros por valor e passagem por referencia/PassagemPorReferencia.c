
#include <stdio.h>
#include <stdlib.h>

void swap(int *a,int *b);
/*nesse caso não são passados valores das variáveis para a função
,mas somente suas referências, e a função usa referênciaas para
alterar os valores fora da função. */
// Isso é util quando não queremos alterar os valores dos parâmetros formais dento da função
//em C somente usa chamadas por valor
//O recurso para simular chamada por referencia é que usamos é a utilização de ponteiros , vide exemplo:
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
