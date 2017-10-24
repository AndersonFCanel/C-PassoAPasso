#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
char nomearquivo[20];
char extarq[5],ponto[2];

printf("Entre com nome para o arquivo: ");
gets(nomearquivo);

printf("Qual extensao desejada: ");
gets(extarq);

strcpy(ponto,".");
strcat(nomearquivo,ponto);
strcat(nomearquivo,extarq);

FILE *arquivo;
arquivo = fopen(nomearquivo,"w");

if(arquivo){
printf("Arquivo %s  criado com sucesso",nomearquivo);
}
else{
printf("arquivo nao criado.");
}
getche();

	return 0;
}
