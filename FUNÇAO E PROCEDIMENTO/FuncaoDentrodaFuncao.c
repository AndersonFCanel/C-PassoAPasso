#include <stdio.h>
#include <stdlib.h>


void  funcao1(void){
printf("\n Ola eu sou impresso pela funcao1.\n ");
}

float funcao2(float val){
printf("\nRetornando o valor %.2f para quem chamou a funcao. ",val+1);
funcao1();
return val+1;
}

float funcao3(char ch,int valor){
printf("%c (sou impresso pela funcao2.)",ch);
float t = valor+1.5;
printf("\nChamando a funçao, passando %.2f como parametro ",t);
float retorno=funcao2(t);
}

void main(void){

float num = funcao3('a',10);
printf("\n%.2f",num);

}
