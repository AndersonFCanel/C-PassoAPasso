#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

// função
float somar(float a, float b){
	return a+b;
}

float subtrair(float a, float b){
	return a-b;
}

float multiplicar(float a, float b){
	return a*b;
}

float dividir(float a, float b){
	return a/b;
}

// procedimento
void getMenu(){
	printf("\n\n--------- CALCULADORA --------- \n");
	printf("+ SOMAR \n");
	printf("- SUBTRAIR  \n");
	printf("* MULTIPLICAR  \n");
	printf("/ DIVIDIR  \n");
	printf("<ESC> SAIR \n");
	printf("------------------------------- \n");
	printf("opcao___: ");
}

int main(int argc, char *argv[]) {
	float resultado, oper1, oper2;
	char opcao = ' ';
	while(opcao!=27){

		system("cls");

		getMenu();
		opcao = getche();

		if(opcao=='+' || opcao=='-' || opcao=='*' || opcao=='/'){
			printf("\n\nEntre com o primeiro operando:");
			scanf("%f",&oper1);

			printf("Entre com o segundo operando:");
			scanf("%f",&oper2);
		}


		switch (opcao) {
			case '+':
				resultado = somar(oper1,oper2);
				printf("resultado = %.2f",resultado);
				break;

			case '-':
				resultado = subtrair(oper1,oper2);
				printf("resultado = %.2f",resultado);
				break;

			case '*':
				resultado = multiplicar(oper1,oper2);
				printf("resultado = %.2f",resultado);
				break;

			case '/':
				resultado = dividir(oper1,oper2);
				printf("resultado = %.2f",resultado);
				break;
            default : 
			printf("\nOpcao invalida");  
		}
		getch();

	}

}

