#include <stdio.h>
/*Recursividade em C
Uma função que é dita recursiva é aquela que invoca ela mesma.
Já explicamos, e demos exemplos, que é possível, recomendável e normal que uma função invoque outra.

Porém também é possível que uma função chame ela mesma, mas é preciso um cuidado especial para não cairmos em um looping infinito.

Geralmente, para que uma função não fique invocando ela mesma indefinidamente, devemos fazer umas alterações no argumento, ao invocar novamente a função ao passo que devemos definir, na função, testes condicionais sobre o parâmetro para saber onde devemos parar de invocar a função.
*/
int restodadivisao(int x, int y)
{
   if(x < y){
     return x;
     }else{
          return (restodadivisao(x-y,y));
          }
}

int main(void){
        int num1,num2,resultado;

        printf("\n Entre com o primeiro numero: ");
        scanf("%d",&num1);
        printf("\bEntre com o segundo numero :");
        scanf("%d",&num2);

        resultado = restodadivisao(num1,num2);
        printf("\nResultado : %d", resultado);

        getch();

        return 0;

        }



