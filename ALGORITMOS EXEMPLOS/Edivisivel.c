#include <stdio.h>
#include <stdlib.h>

int EDivisivel(int a ,int b){
int resto=a%b;
if(resto==0)
return 1;

else
return 0;
}

void main(){
int num1,num2;;

printf("Entre com os numeros a serem testados: ");
scanf("%d%d",&num1,&num2);

if(EDivisivel(num1,num2))
printf("O numero e divisivel ! ");
else
printf("O numero nao e divisivel! ");

getch();
}
