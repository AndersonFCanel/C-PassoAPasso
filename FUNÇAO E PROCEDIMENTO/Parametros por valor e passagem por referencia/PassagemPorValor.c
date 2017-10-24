#include <stdio.h>
#include <stdlib.h>

float sqr(float num);//Escopo da função

/*Nesse tipo de chamada denominada passagem por valor
são passados valores para função e a variável local de MAIN()
num não é alterada. */

void main(){
 float num,sq;
 printf("Entre com um numero: ");
 scanf("%f",&num);
 sq=sqr(num);//o parametro formal num sofre alterações na função e nao na variavel local de main() num
 printf("\n\nO numero original e: %.2f\n Foi lida a variavel num dentro de main()\n",num);
 printf("O seu quadrado vale: %.2f\nA variavel sq recebeu valor de num aplicado na funcao sqr.",sq);
}

float sqr(float num){   //função sqr>: retorna o quadrado de um número
num=num*num;
return num;
}

