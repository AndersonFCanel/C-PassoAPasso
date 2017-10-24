#include <stdio.h>
#include <stdlib.h>
///////Exemplos de uso de função
float somar(float a, float b){
printf("\nOla, Digite dois valores para que eu possa somar : ");
float x,y;
scanf("%f %f",&x,&y);
printf("\nO valor dessa soma e: %.3f!",x+y);
return 0;
}
// Essa função retornara o quadrado de dois termos

float square(float a, float b){
printf("\nOla, Digite dois valores para que eu possa calcular seus valores quadrados : ");
float x,y;
scanf("%f %f",&x,&y);
printf("\n O valor dos quadrados dos numeros e: \n %.3f \n %.3f ",x*x,y*y);
return 0;
}

float square2(float a){
return (a*a);
}/* Para ussar dessa forma em main declere uma variavel quad do tipo float e passe o valor de num para funçao square2
repassando-o valor de retorno para quad
assim:
float quad;
quad=square2(quad);*/


float multiplicar(float a, float b){
return (a*b);
}
/////Esse prototipo de funçao foi colocado acima do codigo enquanto
////os parametros e a função sao colocadas abaixo do codigo
void imprimir();
float subtrair(float a,float b);

int main(){
    float a,b;
somar(a,b);
printf("\n");
////////////////////
square(a,b);
printf("\n\n\n");
//////////////////
printf("Digite dois valores a serem multiplicados: ");
scanf("%f %f",&a,&b);

a=multiplicar(a,b);
printf("O resultado e: %.3f ",a);

/////////////
imprimir();
/////////////
subtrair(a,b);
return 0;
}

void imprimir(){
printf("\n\nOlá estou no fim do codigo!!");
}


float subtrair(float a, float b){
printf("\nOla, Digite dois valores para que eu possa calcular seus valores subtraidos : ");
float x,y;
scanf("%f %f",&x,&y);
printf("\n O valor da difrenca dos numeros e: \n %.3f",x-y);
return 0;
}
