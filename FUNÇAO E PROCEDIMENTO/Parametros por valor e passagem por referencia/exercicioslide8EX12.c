#include<stdio.h>
#include <stdlib.h>

void levetor(int *vet /*POSSO SUBSTITUIR POR VET[]*/, int dimensao);

void main(){
int dimensao, i ;

printf("Digite a dimensao do vetor: ");
scanf("%d",&dimensao);

int vet [dimensao];

for(i=0;i<dimensao;i++){
   printf("%d\t",&vet[i]);
}
getch();

}


void levetor(int *vet, int dimensao){
int i;
for(i=0;i<dimensao;i++){
   printf("Entre  com o valor : ,i+1");
   scanf("%d",&vet[i]);
}
}
