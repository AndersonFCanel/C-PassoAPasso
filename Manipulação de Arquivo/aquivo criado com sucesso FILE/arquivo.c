#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
char nomearquivo[20];

printf("Entre com nome para o arquivo: ");
gets(nomearquivo);

FILE *arquivo;
arquivo = fopen(nomearquivo,"w");

if(arquivo){
printf("Arquivo %s criado com sucesso",nomearquivo);
}
else{
printf("arquivo nao criado.");
}
getche();

	return 0;
}
