#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"

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
