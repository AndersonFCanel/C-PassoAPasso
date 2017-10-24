#include <stdio.h>
#include <stdlib.h>

int main(){

int num,valor;
int *pt;

num=100;
pt=&num;
//Pega o endereço de num1
valor=*pt;
//variavel valor e igualada a num de maneira indireta.

printf("\nO valor inicial: %d\n",valor);

printf("\nEndereco de memoria para onde o ponteiro aponta : %p\n",pt);
//o codigo %p indica a função printf() que ela deve imprimir um endereço de memoria
printf("\nValor da variavel apontada: %d\n",*pt);

getch();
system("cls");

int num1,*p;
num1=500;
p=&num1; // pegando o valor de num1
printf("\nO valor inicial : %d\n",num1);
*p=333; // O valor de num foi modificado de forma indireta
printf("\nValor final: %d\n ",num1);

//////
printf("\nO endereço onde a variavel se num1 encontra: %p\n\n",p);

return 0;
}

