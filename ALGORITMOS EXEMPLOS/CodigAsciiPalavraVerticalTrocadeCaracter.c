#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void) {
	

	char op;
	
	do {
		
		system("cls");
				
		printf("Escolha uma das opcoes abaixo:\n");
		printf("1 - descubra o codigo ascii\n");
		printf("2 - descubra o caractere\n");
		printf("3 - palavra vertical\n");
		printf("4 - troca caractere por *\n");
		printf("<esc> - sair\n");
		printf("Opcao____________:");

		op = getche();

		if(op=='1'){
			printf("\n\nEntre com um caractere:");
			char ch = getche();	
			printf("\n\nO codigo ascii do caractere %c = %d\n\n",ch,ch);
			
			getch();
		}
		
		else if(op=='2'){
			printf("\n\nEntre com um numero entre 0 e 255:");
			int num;
			scanf("%d",&num);
			printf("\n\nO caractere do código ascii %d = %c\n\n",num,num);

			getch();

		}
		
		else if(op=='3'){
			printf("\n\nEntre com uma palavra:");
			char palavra[100];
			scanf("%s",&palavra);
			int tamPalavra = strlen(palavra);
			int i;
			for(i=0;i<tamPalavra;i++){
				printf("%c\n",palavra[i]);
			}

			getch();

		}
		
		else if(op=='4'){
			printf("\n\nEntre com uma palavra:");
			char palavra[100];
			scanf("%s",&palavra);
			char ch;
			printf("Entre com um caractere:");
			ch = getche();
			
			int tamPalavra = strlen(palavra);
			int i;
			for(i=0;i<tamPalavra;i++){
				if(ch==palavra[i]){
					palavra[i]='*';
				}
			}
			printf("\n\n%s",palavra);
	
			getch();
		}
	
	} while (op!=27);
	
}


