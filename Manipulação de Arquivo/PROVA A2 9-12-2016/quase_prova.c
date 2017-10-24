#include <stdio.h>
#include <stdlib.h>


menu(){
	system("cls");
	system("color f0");
	printf("\n\n\n\n\n  ===================== MENU =====================");
	printf("\n  =   1   - EXIBE LISTA DE FUNCIONARIOS          =");
	printf("\n  =   2   - INSERE FUNCIONARIO NO REGISTRO       =");
	printf("\n  =   3   - EXIBE MEDIA SALARIAL                 =");
	printf("\n  =   4   - GRAVA FUNCIONARIO COM MAIOR SALARIO  =");
	printf("\n  = <ESC> - SAIR                                 =");
	printf("\n  ================================================\n");
	printf("  Opcao: ");
}

typedef struct {
	char nome[50];
	int idade;
	char endereco[100];
	float salario;
} FUNCIONARIO;

FUNCIONARIO vetorFuncionario[200];
int contadorFuncionario;

inserir(){
	system("cls");
	system("color 0f");
	FUNCIONARIO fun;
	printf("\n\n\n\n\n  ====== INCLUSAO DE FUNCIONARIO ======");

	printf("\n    Nome:");
	gets(fun.nome);
	fflush(stdin);
	
	printf("    Idade:");
	scanf("%d",&fun.idade);
	fflush(stdin);

	printf("    Endereco:");
	gets(fun.endereco);
	fflush(stdin);
	
	printf("    Salario:");
	scanf("%f",&fun.salario);
	fflush(stdin);
	
	vetorFuncionario[contadorFuncionario] = fun;
	contadorFuncionario++;


}

void listar(){
	int i;
	system("cls");
	system("color 0f");
	printf("\n\n\n\n\n  ====== LISTA DE FUNCIONARIOS ======\n\n");

	for(i=0;i<contadorFuncionario;i++){
		printf("   Nome: %s\n",vetorFuncionario[i].nome);		
		printf("   Idade: %d\n",vetorFuncionario[i].idade);		
		printf("   Endereco: %s\n",vetorFuncionario[i].endereco);		
		printf("   Salario: R$%.2f \n",vetorFuncionario[i].salario);		
		printf("  ===================================\n\n");
	}
	getch();
}

void media(){
	system("cls");
	system("color 0f");

	int i;
	float total=0;
	float media;
	
	for(i=0;i<contadorFuncionario;i++){
		total += vetorFuncionario[i].salario;
	}
	
	media = total/contadorFuncionario;

	printf("\n\n\n\n\n  ====== MEDIA SALARIAL ======\n\n");
	printf("   valor: %.2f\n",media);		
	getch();
	
}


main(){
	contadorFuncionario = 0;
	char opcao;
	do {
		menu();
		opcao = getche();
		
		switch (opcao){
			case '1':
				listar();
				break;
			case '2':
				inserir();
				break;
			case '3':
				media();
				break;
		}
		
	} while(opcao!=27);
	
}
