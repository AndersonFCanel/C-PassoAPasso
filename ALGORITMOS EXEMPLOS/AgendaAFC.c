#include <stdlib.h>
#include <stdio.h>

int main (){
	system("color 80");
	char nome[99][50];
	char num [99][10];
	char nomeAux [50], numAux[10];
	int i=0, j, controle,contador=0; 
	//Variavel indice i, indice j, controle de saida do laço, e contador de contatos.
	//===================INFO DO PROGRAMA==================
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t============================================================");
	printf("\n\t\t\t Esse programa e uma agenda eletronica.");
	printf("\n\t\t\t Onde o usuario insere o nome e o telefone. ");
	printf("\n\t\t\t Apos armazenados os contatos, todos serao exibidos na tela. ");
	printf("\n\t\t\t============================================================");
	printf("\n\n\n\n\n\n\n\n\n\n");
	system("pause");
	
	//INSERIR
	do{
		
		system("cls");
		fflush(stdin);
		printf("Entre com nome: ");
		gets(nome[i]);
		fflush(stdin);	
		printf("Entre com telefone: ");
		gets(num[i]);
		fflush(stdin);
		
		printf("Deseja inserir um contato telefonico?");
	    printf("\n\tSe sim digite 'esc'.'");
	   	controle=getch();
	   	
	   	contador++;
	   	i++;
	   	if(i>=99){ // para que não 'estoure' o limite de 99 linhas do vetor
	   		break;
		   }
	}while(controle!=27);
	 
	 //EXIBIR LISDA DESORDENADA PARA COMPARAR E VERIFICAR ERROS
	system("cls");
	printf("LISTA TELEFONICA DESORDENADA LEXICAMENTE: \n");
	for(i=0;i<contador;i++){
		printf("-- Contato %d.\n",i+1);
		printf("Nome: %s\n",nome[i]);
		printf("Telefone: %s\n",num[i]);
		printf("\n");
	}
	printf("\n");
	
	//ORDENAÇÃO ATRAVÉS DE BUBLE SORT
	for (i=0;i<contador;i++){
		for(j=i+1;j<contador;j++){
			if(strcmp(nome[j],nome[i])<0){
				strcpy(nomeAux,nome[j]);
				strcpy(numAux,num[j]);
				strcpy(nome[j],nome[i]);
				strcpy(num[j],num[i]);
				strcpy(nome[i],nomeAux);
				strcpy(num[i],numAux);
			}
		}
	}
	
	//EXIBIR LISTA ORDENADA ALFABETICAMENTE
	printf("\nLISTA TELEFONICA ORDENADA LEXICAMENTE: \n");
	for(i=0;i<contador;i++){
		printf("-- Contato %d.\n",i+1);
		printf("Nome: %s\n",nome[i]);
		printf("Telefone: %s\n",num[i]);
		printf("\n");
	}
		
	system("pause");
	return 0;
}


