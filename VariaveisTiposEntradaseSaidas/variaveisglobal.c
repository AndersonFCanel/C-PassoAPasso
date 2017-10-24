#include <stdio.h>

int num;

int func(int a, int b){
 	a = (a+b)/2;
 	num -= a;
 	return a;
 }

int main (){
	int first = 0, sec = 50;
	num = 10;
	num += func(first,sec);

	printf("\n\nConfira! num = %d\t first= %d\tsec =%d",num,first,sec);
	getch();

return 0;
}
