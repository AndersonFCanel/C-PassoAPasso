#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int somar(int a,int b){
	return (a+b);
}
int subtrair(int a, int b){
    return (a-b);
}
int multiplicar(int a, int b){
	return (a*b);
}
int dividir(int a, int b){
	return (a/b);
}

int zerar(){
	return 0;
}
int soma_dos_quadrados(int a, int b){
	return((a*a)+(b*b));
	}
	
 void imprime_menu(){
 	system("cls");
    printf("-----------------------------------------");
    printf("\n1 - para somar dois numeros.  ");
	printf("\n2 - para subtrair dois numeros.  ");
	printf("\n3 - para multiplicart dois numeros.  ");
	printf("\n4 - para dividir dois numeros.  ");
	printf("\n5 - para somar os quadrados .");
	printf("\n6 - para redefinir os operandos.");
	printf("\n  <ESC> PARA SAIR!");
	printf("\n-----------------------------------------");
    printf("\n   Escolha a opcao desejada:  \n");
	printf("\n\n");
 }
 
 
 int a , b;
 
  void inserir_operandos(){
	
	printf("Digite um número: ");
	scanf("%d",&a);
	printf("Digite outro número: ");
	scanf("%d",&b);
  } ;
 
 int main(int argc, char *argv[]) {

	int resultado,op;

   inserir_operandos();

	getch();


	do{
    
	imprime_menu();

	op=getch();

		switch(op){
			case '1' :
			    resultado=somar(a,b);
			    printf(" A soma de dois numeros e: %d \n\n",resultado);
			    getch();
			break;

			case '2' :
			    resultado=subtrair(a,b);
			    printf(" A subtraçao de dois numeros e: %d \n\n",resultado);
			    getch();
			break;

			case '3' :
			    resultado=multiplicar(a,b);
			    printf(" A multplicaçao de dois numeros e: %d \n\n",resultado);
			    getch();
			break;

			case '4' :
			    resultado=dividir(a,b);
			    printf(" A divisao de dois numeros e: %d \n\n",resultado);	
			    getch();
                
            case '5' : 
			    resultado=soma_dos_quadrados(a,b);
				printf(" A soma do quadrado de dois numeros e: %d \n\n",resultado);	
			    getch();
				 
			case '6' :
			    a=b=resultado=zerar();	
			    getch();
			    
			    inserir_operandos();
			    break;
			             	
				
               default :
              printf("\nOpcao invalida");
			  getch();               	
			}
	}while(op!=27);
	
	
return 0;
}

