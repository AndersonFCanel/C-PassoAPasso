#include <stdio.h>

#define decremento  i--;
#define incremento  i++;
#define imput(str)  gets(str);
#define println(str)  puts(str);
#define PI           3.1416
//OUTRA FORMA:
#define imput(str2)  scanf("%s",str2);
#define println(str2) printf("%s\n",str2);


int main(){

char str[100];
printf("\n digite uma string:" );
imput(str);
println(str);

printf("\nOnumero de pi vale: %f ",PI);


getch();

return 0;

}
