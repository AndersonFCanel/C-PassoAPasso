#include <stdio.h>
#include <stdlib.h>

float sqr(float num);//Escopo da fun��o

/*Nesse tipo de chamada denominada passagem por valor
s�o passados valores para fun��o e a vari�vel local de MAIN()
num n�o � alterada. */

void main(){
 float num,sq;
 printf("Entre com um numero: ");
 scanf("%f",&num);
 sq=sqr(num);//o parametro formal num sofre altera��es na fun��o e nao na variavel local de main() num
 printf("\n\nO numero original e: %.2f\n Foi lida a variavel num dentro de main()\n",num);
 printf("O seu quadrado vale: %.2f\nA variavel sq recebeu valor de num aplicado na funcao sqr.",sq);
}

float sqr(float num){   //fun��o sqr>: retorna o quadrado de um n�mero
num=num*num;
return num;
}

