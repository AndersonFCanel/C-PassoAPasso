#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	system("cls");
	printf("O que voce deseja fazer com os valores a=%s e b=%s ?\n",argv[1], argv[2]);
	printf("1 - somar\n");
	printf("2 - subtrair\n");
	printf("3 - multiplicar\n");
	printf("4 - dividir\n");
	printf("ESCOLHA SUA OPCAO:");
	char opcao = getche();

	int a = atoi(argv[1]);
	int b = atoi(argv[2]);

	switch (opcao){
		case '1':
			printf("\n resultado da SOMA entre os numeros %d e %d = %d",a,b,(a+b));
			break;

		case '2':
			printf("\n resultado da SUBTRACAO entre os numeros %d e %d = %d",a,b,(a-b));
			break;

		case '3':
			printf("\n resultado da MULTIPLICACAO entre os numeros %d e %d = %d",a,b,(a*b));
			break;

		case '4':
			printf("\nO resultado da DIVISAO entre os numeros %d e %d = %.1f",a,b,(float) ((float) (a) / (float)(b)));
			break;

		default:
			printf("\nOPCAO INVALIDA...\n");
			break;
	}
	getch();
	return 0;
}
