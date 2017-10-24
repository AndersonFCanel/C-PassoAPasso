#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

int i; //variavel i serve como contadora
printf("\nargc = %d",argc);

 for(i=0;i<argc;i++){
   printf("\nargv[%d] = %s\t",i,argv[i]);//percorre e imprime o vetor de argumentos
  }

getch();

return 0;
}
