#include <stdio.h>
#include <stdlib.h>

/* PARA USO DAS FUN�OES ABAIXO NO LINUX DEVE SE CRIAR UMA FUN�AO ANTES DE MAIN ASSIM:
void getch(void){
getchar();
}
 */

int main(int argc, char *argv[]) {
	char a;
	a=getch();//GETCH retorna o ultimo caracter digitado
	printf("%c\n",a);
	
	system("pause");
	
	getche();//GETCH retorna o ultimo caracter digitado e IMPRIME na tela
	
	return 0;
}
