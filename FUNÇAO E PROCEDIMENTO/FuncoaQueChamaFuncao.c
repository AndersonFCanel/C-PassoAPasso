#include <stdio.h>
#include <stdlib.h>
// soma de dois numeros usando seus modulos
int main(){

 float somadeDIGITOS(float num1, float num2);
 float a,b,soma;

 printf("\nDigite dois numeros: ");
 scanf("%f%f",&a,&b);

 soma = somadeDIGITOS(a,b);

 printf("\nA soma dos digitos e': %f ",soma);

 system ("pause");
 return 0;


}

float somadeDIGITOS(float num1, float num2){
    float valorAbsoluto(float x);
    if(num1<0){
      num1 = valorAbsoluto(num1);
      }
     if(num2<0){
       num2 =valorAbsoluto(num2);
     }
     return num1+num2;

}

float valorAbsoluto(float x){
return x*-1;
}
