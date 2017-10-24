#include <stdio.h>
#include <stdlib.h>

void main (void){
  FILE *arquivo;
  char nomearquivo[20];

  printf("Digite um nome para o arquivo a ser criado :");
  gets(nomearquivo);

   strcat(nomearquivo,".txt");// Usamos somente o nome da string
   puts(nomearquivo);


  arquivo = fopen(nomearquivo,"a+");//usamos o nome da string mas o modo de abertura
  if (arquivo){
      printf("Arquivo criado com sucesso!");
  }
  else{
     printf("Erro na abertura de arquivo. ");
  }
  getch();
}
