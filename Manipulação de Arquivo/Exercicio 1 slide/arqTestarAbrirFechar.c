#include <stdio.h>
#include <stdlib.h>

void main (void){
  FILE *arquivo;

  arquivo = fopen("ARQUIVO DE TESTE.txt","a+");
  if (arquivo){
      printf("Arquivo criado com sucesso!");
  }
  else{
     printf("Erro na abertura de arquivo. ");
  }
  getch();
}
