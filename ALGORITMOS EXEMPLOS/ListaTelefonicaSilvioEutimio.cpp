// /Algoritmo: Ordenação de um vetor A com n elementos. No exemplo foi com 20 elementos.
// Usando C.

#include <stdio.h>
#include <conio.h>

#define N 5
void lervetor(int v[])
{
     int i;    
     i = 0;
     while(i < N)
     {
             printf("Digite um elemento do vetor:");
             scanf("%d", &v[i]);
             i = i + 1;
     }
}

void escrevervetor(int v[])
{
     int i;
     printf("{");
     i = 0;
     while(i < N)
     {
             printf(" %d ", v[i]);
             i = i + 1;
     }
     printf("}\n");
}

main()
{
      int i, j, a[N], aux;
      
      lervetor(a);

      printf("vetor original = ");

      escrevervetor(a);

      j = N - 2; /* essa é a penúltima posição do vetor */
      while(j >= 0)
      {
              i = 0;
              while(i <= j)
              {
                      if(a[i] > a[i + 1])
                      {
                              aux = a[i];
                              a[i] = a[i + 1];
                              a[i + 1] = aux;
                      }
                      i = i + 1;
              }
              j = j - 1;
      }
      printf("\n");
      printf("vetor ordenado = ");
      escrevervetor(a);
      getch();
}
