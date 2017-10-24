#include <stdio.h>
#include <stdlib.h>

// ordenar numeros dentro do vetor

int main(){

int vetor[10]={6,4,1,9,8,0,5,7,3,2};

int i;

void OrdemCrescente(int vetor[], int n);


void OrdemCrescente(vetor);

for(i=0;i<10;i++){
printf("%i ",vetor[i]);
}

getchar();
return 0;

}


void OrdemCrescente(int vetor[/*NAO PRECISO INFORMAR A QTD DE MENBROS DO MEU VETOR!*/], int n){
    int i,j,temp;
    for (i=0;i<n;i++){
         for(j=i+1;i<n;i++){
            if(vetor[i]>vetor[j]){
              temp = vetor[i];
              vetor[i]=vetor[j];
              vetor[j]=temp;
            }
         }
    }
}
