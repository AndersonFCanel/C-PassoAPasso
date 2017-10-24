#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void menu(){
	system ("cls");
	printf("\n\t\t================================================");
    printf("\n\t\t=             O QUE DESEJA FAZER               =");
    printf("\n\t\t================================================");
    printf("\n\t\t=  1 - CADASTRAR PRODUTOS                      =");
    printf("\n\t\t=  2 - LISTAR PRODUTOS                         =");
    printf("\n\t\t=  3 - ALTERAR VALOR                           =");
    printf("\n\t\t=  4 - GRAVAR PRODUTO MAIS CARO                =");
    printf("\n\t\t=<ESC> - SAIR                                  =");
    printf("\n\t\t================================================");
    printf("\n\n\t\t  OPCAO:                                      ");
}

//------------------------------------------------------------------------------------
typedef struct{
	char nomeProduto[100];
	int codigoProduto;
	float valorProduto;
}produto;

 produto vet_produto[200];
 int contador_de_produtos;
//------------------------------------------------------------------------------------
void inserir(){
	system("cls");
	produto prod;
	
     printf("\n=============TELA DE CADASTRO DOS PRODUTOS==================\n\n");
     printf("\nENTRE COM NOME DO PRODUTO: ");
     gets(prod.nomeProduto);	
     fflush(stdin);
     
     printf("\nENTRE COM CODIGO DO PRODUTO: ");
     scanf("%d",&prod.codigoProduto);
     fflush(stdin);
     
     printf("\nENTRE COM VALOR DO PRODUTO: ");
     scanf("%f",&prod.valorProduto);
     fflush(stdin);
     
     getch();
     
     vet_produto[contador_de_produtos]=prod;
     contador_de_produtos++;
     
	 printf("\nCADASTRADO COM SUCESSO!");
}
//--------------------------------------------------------------------------------
void listar(){
	
	system("cls");
	
	printf("\n===============================================================");
	printf("\n=                 LISTAGEM DE PRODUTOS                        =");
    printf("\n===============================================================");
    printf("\n");
     int i;
	 for(i=0;i<contador_de_produtos;i++){
	 	printf("\nPRODUTO N %d",i+1);
		printf("\nPRODUTO: %s",vet_produto[i].nomeProduto);
	 	printf("\nCODIGO: %d",vet_produto[i].codigoProduto);
	 	printf("\nVALOR: %2.f",vet_produto[i].valorProduto);
	 	printf("\n\n");
	 	
	 }
	 printf("\n==============================================================");
	 getch();
 }
 //------------------------------------------------------------------------------------------
 void alterar(){
 	system("cls");
 	fflush(stdin);
 	printf("\n===============================================================");
 	printf("\n=                    TELA DE ALTERACAO                        =");
 	printf("\n===============================================================");
 	
 	int cod_prod;
 	
 	printf("\nENTRE COM CODIGO DO PRODUTO: ");
 	scanf("%d",&cod_prod);
 	fflush(stdin);
 	

         int i;
         
         for(i=0;i<contador_de_produtos;i++)
         {
         
             if(vet_produto[i].codigoProduto==cod_prod)
            {
	      	    printf("\nPRODUTO: %s",vet_produto[i].nomeProduto);
 	 	        printf("\nCODIGO: %d",vet_produto[i].codigoProduto);
	            printf("\nVALOR: %2.f",vet_produto[i].valorProduto);
	    	    printf("\n\n");
                
                printf("\nENTRE COM NOVO VALOR DO PRODUTO: ");
                scanf("%f",&vet_produto[i].valorProduto);
                fflush(stdin);   
                printf("\nALTERADO COM SUCESSO!");
		   }else{
		   	printf("\nPRODUTO NAO ENCONTRADO! ");
		   }
            
        }
    getch();
   }   
 //-------------------------------------------------------------------------------------------
 
 
void gravar(){
	 
	system("cls");
    printf("\n===============================================================");
 	printf("\n=           GRAVAR O PRODUTO DE MAIOR VALOR                   =");
 	printf("\n===============================================================");
     
	 char nome_arquivo[50];
     
     printf("\nDIGITE O NOME DO ARQUIVO: ");	
     gets(nome_arquivo);
     fflush(stdin);

     FILE *ARQUIVO;

    ARQUIVO = fopen (strcat(nome_arquivo,".txt"),"a+"); 
   
    if (ARQUIVO == NULL) {
        printf("\nErro ao abrir o arquivo.");
        exit(1);
    }   
	   
	int i;
    
	for(i=0;i<contador_de_produtos;i++){
        fprintf(ARQUIVO ,"\nProduto : -%s- \nCodigo: -%d- \nValor: -%2.f-\n\n\n\n ", vet_produto[i].nomeProduto,vet_produto[i].codigoProduto,vet_produto[i].valorProduto);
    }
       printf("\n\nPRODUTO GRAVADO COM SUCESSO!");
    fclose(ARQUIVO);
}

//-------------------------------------------------------------------------------------------------
int main(){
	char op;
    
	
	do{
		
		menu();
		op=getch();
		
		switch (op){
			case '1' :
				inserir();
			break;
			
			case '2':
				listar();
			break;
			
			case '3':
				alterar();
			break;
			
			case '4':
				gravar();
			break;
				
		}
	}while(op!=27);
return 0;
}

