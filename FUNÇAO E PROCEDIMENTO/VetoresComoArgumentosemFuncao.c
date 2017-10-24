#include <stdio.h>
#include <stdlib.h>
 // DIVERSSAS FORMAS DE SE DECLARAR UMA FUNÇAÕ COM CADEIA DE CARACTERES COMO ARGUMENTO
void func1(char vetor[50]){
	char nome[50];
	printf("\n\n\nEste nome sera impresso por func1.");
	printf("\nDigite algo: ");
	gets(nome);
	puts(nome);
	fflush(stdin);
}

void func2(int vetor[]){
	char nome[50];
	printf("\n\n\nEste nome sera impresso por func2.");
	printf("\nDigite algo: ");
	gets(nome);
    puts(nome);
    fflush(stdin);
}
void func3(int *vetor){
	char nome[50];
	printf("\n\n\nEste nome sera impresso por func3.");
	printf("\nDigite algo: ");
	gets(nome);
	puts(nome);
	fflush(stdin);
}

int main(){
char nome[50];
printf("\nDigite um nome a ser impresso pela funcao main: ");
printf("Observar que esse nome esta sendo impresso pela funcao MAIN\n");  //Observar que o PGM primeiro faz uma chamada em main
gets(nome);
puts(nome);
fflush(stdin);

func1(nome);  // Observar que as proximas chamadas serão feitas nas funçoes!!!
func2(nome);
func3(nome);

	return 0;
}
