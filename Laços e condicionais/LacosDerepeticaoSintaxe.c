#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char palavra[20];
	int x=1;
	
	printf ("Digite uma palavra: ");
	gets(palavra);
	
	//WHILE
	while(x<=20){
	printf("\n%s",palavra);
	x++;
	}
	
	getch();
	
	//DO WHILE
	printf("\\n\n\nAGORA USANDO DO WHILE\n\n\n");
	x=1;
    do{
	printf("\n%s",palavra);
	x++;
	}while(x<=20);

	getch();
	
    // FOR	
	printf("\\n\n\nAGORA USANDO DO FOR\n\n\n");
    for(x=1;x<=20;x++){
	printf("\n%s",palavra);
	};

	return 0;
}
