#include <stdio.h>
#include <stdlib.h>

void func1(char vetor[50]){
	char nome[50];
	printf("Digite algo: \n");
	gets(nome);
	puts(nome);
}

void func2(int vetor[]){
	char nome[50];
	printf("Digite algo: \n");
	gets(nome);
    puts(nome);
}
void func3(int *vetor){
	char nome[50];
	printf("Digite algo: \n");
	gets(nome);
	puts(nome);
}

int main(){
char nome[50];
gets(nome);
func1(nome);

	return 0;
}
