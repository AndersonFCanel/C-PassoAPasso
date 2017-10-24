#include <stdio.h>
#include <stdlib.h>

int main(){

char texto[100];
int i,tamanho;

printf("Entre com um texto: ");
gets(texto);

tamanho=strlen(texto);
i=0;

while (i<tamanho){
     if(texto[i]!=32){
        printf("%c",texto[i]);
     }else{
     printf("\n");
     }
     i++;
}
return 0;
}
