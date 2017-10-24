#include <stdio.h>
#include <stdlib.h>

void main(void){
  int i;  char nome[20], st[100];
  printf("\nEntre com o nome do arquivo:");
  scanf("%s",&nome);


  printf("Entre com a string a ser inserida:");
  scanf("%s",&st);


  FILE *arquivo = fopen(nome,"a+");
  for(i=0;st[i]!='\0';i++){
    putc(st[i],arquivo);
  }

  if(fclose(arquivo)==0){
    printf("\nArquivo fechado com sucesso.");
  };
  getch();
}
