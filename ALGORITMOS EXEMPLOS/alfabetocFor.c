#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char alfabeto;
	printf("Pressione qualquer tecla para comecar!!!\n");
	getch();
	
	for(alfabeto='A';alfabeto<='Z';alfabeto++){
		printf("%c - ",alfabeto);
	}
	printf("\n");
	for(alfabeto='a';alfabeto<='z';alfabeto++){
		printf("%c - ",alfabeto);
	}
	printf("\n");
	system("pause");
	
	return 0;
}
