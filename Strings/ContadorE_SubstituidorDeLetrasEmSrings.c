#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char op,st[100];
	int cont=0,i;



	do{ // USANDO LA�O DO WHILE PODEREMOS REPETIR VARIAS VEZES O PROGRAMA
		cont=0;
		printf("Digite uma palavra: ___");
	    gets(st); //PARTE DO PROGRAMA QUE RECEBE A STRING

	for(i=0;st[i]!='\0';i++){  //PARTE QUE REALIZA PROCESSAMENTO COMPARANDO CADA POSIC�O DO VETOR COM O DIGITO NULO'\0' ,QUE FECHA A STRING.
		if((st[i]=='a')||(st[i]=='A')){//ESTRUTURA DE CONTORLE IF QUE REALIZA COMPARA��O COM LETRA A MAI�SCULA E MIN�SCULA
			cont++;//INCREMETA CONTADOR PARA EXIBIR QUANTIDADES DE OCORR�NCIAS VERDADEIRAS DENTRO DA ESTRUTURA IF
		}
	}

	if(cont==0){//SE CONTADOR N�O TIVER ALGUMA OCORRENCIA IMPRIME ESSA MENSSAGEM
		printf("\nPalavra sem nenhuma ocorrencia da letra --'A'--.");
	}else
	if(cont!=0){//CASO CONTRARIO EXIBIR� O VALOR ARMAZENADO NO CONTADOR cont
	printf("\nExistem -- %d -- ocorrencias da letra --'A'-- . ",cont);
    }


    //////////////////////////////////////////////////////////////////////////////////////////////////
    printf("Agora todas as ocrrencias de letra -A- receber�o a letra -K-.");
    getch();

    for(i=0;st[i]!='\0';i++){  //PARTE QUE REALIZA PROCESSAMENTO COMPARANDO CADA POSIC�O DO VETOR COM O CONTADOR NULO'\0' ,QUE FECHA A STRING.
		if((st[i]=='a')||(st[i]=='A')){//REALIZA COMPARA��O COM LETRA A MAIUSCULA E MINUSCULA
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
