#include <stdio.h>
#include <stdlib.h>

int zerar(int a, int b){
	return 0;
}

int main(){
	int a,b;
	printf("Digite um valor para A:\n");
	scanf("%d",&a);
	printf("Digite um valor para B:\n");
	scanf("%d",&b);

	printf("\nO valor de A é; %d",a);
	printf("\nO valor de B é; %d",b);

	a=zerar(a,b);
	b=zerar(a,b);

	printf("\nAgora o valor de A é; %d",a);
	printf("\nAgora o valor de B é; %d",b);
	
return 0;
}
