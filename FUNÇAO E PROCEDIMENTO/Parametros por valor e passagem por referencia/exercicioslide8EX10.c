#include<stdio.h>
#include <stdlib.h>

void estranho(int*a);


void main(void){

int *a,*b,c;
c=9;
a=&c;
b=&c;

printf("\n a = %d ",*a);
printf("\n b = %d ",*b);
printf("\n c = %d ",c);

*b=6;
printf("\n a = %d ",*a);
printf("\n b = %d ",*b);
printf("\n c = %d ",c);

*a =7;
printf("\n a = %d ",*a);
printf("\n b = %d ",*b);
printf("\n c = %d ",c);


   getch();
}



