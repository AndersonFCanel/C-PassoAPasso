#include <stdio.h>
#include <stdlib.h>

#define STRSIZE 100 //UMA FORMA DE ATRIBUIR UM PADRAO PARA ENTRADA EM UMA STRING

int main(int argc, char *argv[]) {
	char st1[STRSIZE];  //foi declarado um vetor de caracteres com 100 posiçoes 
	//OBS:> 101 posições pois vai de 0 a 100 e a centessima equivale '\0'=caracter nulo que fecha a string
	char st2[100],st3[100],st4[100],st5[100],st6[100]; 
	
	
	/////////////////////////////////////////////////////////////////////////////////////////
		printf("PRIMEIRA DEMOSNTRACAO: (FGETS) RECEBENDO VALOR ATRAVES  DA FUNCAO FGETS\n");
		printf("\nDigite uma palavra(string) com ate 100 caracteres: \n");
    	fgets(st1,STRSIZE,stdin);;//comando que pode ser usado para ler string a partir do teclado .
    //stdin é a entrada stantard standard in.
		printf("A palavra digitada foi:  %s ", st1);
	////////////////////////////////////////////////////////////////////////////////////////
		getch(); 
		system("cls");
	
		printf("SEGUNDA DEMOSNTRACAO: (PUTS) --- IMPRIMIR SEM USAR PRINTF\n");
		printf("\nDigite outra palavra (segunda string): \n________> ");
		gets(st2);
		printf("A palavra digitada foi:  %s \n >>> Sera impressa novamente usando cmd PUTS>>>> \n veja:>>>>>________> ", st2);
		getch();
		puts(st2);//comando usado para imrimir na tela a string
	/////////////////////////////////////////////////////////////////////////////////////
		getch();
		system("cls");
	
		printf("TERCEIRA DEMOSNTRACAO: (STRCAT)-- CONCATENADOR DE STRINGS\n");
		printf("\nDigite outra palavra: \n (terceira string)\n________> ");
		gets(st3);
		printf("Digite outra palavra: \n (Quarta string)\n________> ");
		gets(st4);
		printf("Usando STRCAT ficará assim::::\n \n________> clique e veja!");
		getch();
		strcat(st3,st4);//Concatenar strings
		puts(st3);
	///////////////////////////////////////////////////////////////////////////////////////////
		getch();
		system("cls");
    	
		printf("QUARTA DEMOSNTRACAO: (STRCPY)--COPIAR UM VALOR PARA UMA STRING \n");
		printf("\nAtribuindo atraves de STRCPY fica assim:>>>\n________>clique e veja! ");
		getch();
		strcpy(st5,"Olá voce NAO me digitou!! \n eu sou um valor copiado(atribuido) para string  atraves do comando STRCPY ");//strcpy copia conteudo para string
		puts(st5);		
	///////////////////////////////////////////////////////////////////////////////////////
    	getch();
    	system("cls");

		printf("QUINTA DEMOSNTRACAO: (STRCMP)--COMPARADOR DE STRINGS \n");
		getch();
		printf("\nOla !! eu vou comparar o valor digitado em duas strings anteriormente, a 1 e a 2. \n se forem iguais retorno 0 senao -1:>>>");
		printf("\nA primeira string é \n________> %s ",st1);
		printf("\nA segunda string e \n________> %s  \n entao o valor retornado é:>>>>\n________> ",st2);
		int x=strcmp(st1,st2);//STRCMP compara o valor de duas strings e da um retorno inteiro
		printf("%d",x);//caso as strings sejam iguais retornará 0 e se for != retornará -1
	/////////////////////////////////////////////////////////////////////////////////////////////////
		getch();
		system("cls");
		
		printf("SEXTA DEMOSNTRACAO: (STRLEN)--CONTAR TAMANHO DA STRING \n");
		int y=strlen(st3);
		printf("\nA string %s foi a terceira a ser digitada, e o resultado da contagem de seus caracteres e:\n________>  %d caracteres.",st3,y);
	    puts(y);
	//////////////////////////////////////////////////////////////////////////////////////

	///////////////////////////////////////////////////////////////////////////////////////
		getch();
		system("cls");
	
		printf("SETIMA DEMONSTRACAO (ATOI)-- CONVERTER UM STRING PARA INTEIRO");
		char st7[100],st8[100],st9[100];
	
		int a,b,s;
	
		printf("\nDigite um numero: ");
		gets(st7);//Repare que digito números para uma STRING
		printf("\nDigite outro numero: ");
		gets(st8);//Repare que digito números para uma STRING
	
		a=atoi(st7);////// atraves do comando ATOI uma variavel char recebe valores inteiros e conseguimos efetuar operaçoes matematicas com  a mesma.
		b=atoi(st8);
		s=atoi(st9);
	
		s=a+b;
	
     	printf("\nO resultado da soma e______> %d",s);
		getch();
	/////////////////////////////////////////////////////////////////////////////////////////////
		system("cls");
    	printf("\OITAVA DEMOSNTRACAO: (SCANF)--- USAR SCANF PARA IMPUTAR VALOR A STRING \n");
		printf("\nDigite outra palavra: \n Repare que se vc clicar no enter sem digitar nada o pgr continnua a rodar  \n isso acontece porque estou usando cmd de leitura SCANF ao inves da funxao GETS!!\n");
    	scanf("%s",&st6);//pode ser usado também para ler a string a partir do teclado  SÓ QUE SE USAR SPACEBAR 'corta' o vetor.
	
		puts(st6);
	
	return 0;
}
