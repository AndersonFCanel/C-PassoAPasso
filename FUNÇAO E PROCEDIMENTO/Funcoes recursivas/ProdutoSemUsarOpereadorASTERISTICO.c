#include <stdio.h>


long  int mult(int x, int y){
  if (y == 1){
    return(x);
    }else{
         return(x+mult(x,y-1));
         }
}

 int main(void){
    int num1,num2,resultado;

     printf("\n Entre com o primeiro numero: ");
     scanf("%d",&num1);
     printf("\bEntre com o segundo numero :");
     scanf("%d",&num2);


     resultado = mult(num1,num2);
     printf("\nResultado : %d", resultado);

     getch();

 }
