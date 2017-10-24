#include <stdio.h>
#include <stdlib.h>

int valor; // variável global

void decrementa(){
	valor-=1;
}
void incrementa(){
	valor+=1;
}
void multiplicar(int mult){
	valor*=mult;
}
void imprime(){
	printf("%d\n",valor);
	system("pause");
}

int main(){
	valor=10;
	decrementa();
	incrementa();
	multiplicar(2);
	imprime();
return valor;
}
