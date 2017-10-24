#include<stdio.h>
#include <stdlib.h>

void estranho(int*a);
int num2;


void main(void){

int num1;
num2 =10;

printf("\n\nEntre com um numero(num1): ");
scanf("%d",&num1);

printf("\n\nValor de num1 = %d ",num1);
printf("\nO valor de num2 = %d ",num2);

 estranho(&num1);

 printf("\n\n\nExecutou a funcao estranho()",num2);
 printf("\n\nValor de num1 = %d ",num1);
 printf("\nO valor de num2 = %d ",num2);

 if(num1==num2){
     printf("\nCondicao 1 >>> num1=num2");
  }else{
         printf("condicao 2");
   }
   getch();
}

void estranho(int *a){
    num2 = *a;
}
