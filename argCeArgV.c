#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]){
   system("cls");
   printf("Seja Bem vindo.\n");
  int i;
   for(i=0;i<argc; i++){
    printf("%d Parametro: %s \n",i,argv[i]);
   getch();
   }
   printf("\n\n");
return 0;
}
