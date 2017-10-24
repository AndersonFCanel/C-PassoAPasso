#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char op,st[100];
	int cont=0,i;



	do{ // USANDO LAÇO DO WHILE PODEREMOS REPETIR VARIAS VEZES O PROGRAMA
		cont=0;
		printf("Digite uma palavra: ___");
	    gets(st); //PARTE DO PROGRAMA QUE RECEBE A STRING

	for(i=0;st[i]!='\0';i++){  //PARTE QUE REALIZA PROCESSAMENTO COMPARANDO CADA POSICÃO DO VETOR COM O DIGITO NULO'\0' ,QUE FECHA A STRING.
		if((st[i]=='a')||(st[i]=='A')){//ESTRUTURA DE CONTORLE IF QUE REALIZA COMPARAÇÃO COM LETRA A MAIÚSCULA E MINÚSCULA
			cont++;//INCREMETA CONTADOR PARA EXIBIR QUANTIDADES DE OCORRÊNCIAS VERDADEIRAS DENTRO DA ESTRUTURA IF
		}
	}

	if(cont==0){//SE CONTADOR NÃO TIVER ALGUMA OCORRENCIA IMPRIME ESSA MENSSAGEM
		printf("\nPalavra sem nenhuma ocorrencia da letra --'A'--.");
	}else
	if(cont!=0){//CASO CONTRARIO EXIBIRÁ O VALOR ARMAZENADO NO CONTADOR cont
	printf("\nExistem -- %d -- ocorrencias da letra --'A'-- . ",cont);
    }


    //////////////////////////////////////////////////////////////////////////////////////////////////
    printf("Agora todas as ocrrencias de letra -A- receberão a letra -K-.");
    getch();

    for(i=0;st[i]!='\0';i++){  //PARTE QUE REALIZA PROCESSAMENTO COMPARANDO CADA POSICÃO DO VETOR COM O CONTADOR NULO'\0' ,QUE FECHA A STRING.
		if((st[i]=='a')||(st[i]=='A')){//REALIZA COMPARAÇÃO COM LETRA A MAIUSCULA E MINUSCULA
			strcpy(st[i],"K");
		}
	}

	//////////////////////////////////////////////////////////////////////////////////////////////////////////////////

    printf("\n\n\n\nDeseja sair se sim digite S: ---->>");//implemento que permite usuario sairo do codigo
    op=getch();

    system("cls");

     }while(op!='s');

	return 0;
}
