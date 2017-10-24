#include <stdio.h>
#include <stdlib.h>

int main (void){

int matriz[3][3]={{1,2,3},
                  {4,5,6},
                  {7,8,9}};
//outra forma para fazer atribuição em matrizes {1,2,3,4,5,6,7,8,9,}
 for(l=0;l<=2;++l){
   for(c=0;c<=2;++c){
   printf("%i",matriz[l][c]);
   }
 }
return 0;
}
