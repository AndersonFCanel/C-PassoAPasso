#include <stdio.h>
#include <stdlib.h>

int Epar(int a){

if(a%2)
return 0;

else
return 1;
}

void main(){
int num;

printf("Entre com um numero: ");
scanf("%d",&num);


if(Epar(num))
printf("O numero e par! ");
else
printf("O numero e impar! ");

getch();
}
