#include <stdio.h>
#include <stdlib.h>

void  imprime(void){
printf("Olá eu sou impresso opela função. ");
}
float media(float n1, float n2){
return ((n1+n2)/2);
}

int main(){
float nota1, nota2,medianota;

imprime();

printf("\nDigite a primeira nota: ");
scanf("%f",&nota1);

printf("\nDigite a rimeira nota: ");
scanf("%f",&nota2);


medianota=media(nota1,nota2);

printf("\nA media é: %f",medianota);
}
