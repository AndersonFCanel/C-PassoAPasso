#include <stdio.h>
#include <stdlib.h>

int main(){

char str[100];

gets(str);
puts(str);

int a = atoi(str);
 printf("%d",a);
}
