#include <stdio.h>
#include <stdlib.h>

void main(void){
  int i;
  FILE *arquivo = fopen("Anderson.txt","a+");
  char texto[100]="Anderson Ferreira Canel!";
  for(i=0;texto[i]!='\0';i++){
    putc(texto[i],arquivo);//FORMA GERAL: int putc (char ch, FILE *fp);
  }
  fclose(arquivo);
  getch(); 
}

