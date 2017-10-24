#include <stdio.h>
/*Recursividade em C
Uma fun��o que � dita recursiva � aquela que invoca ela mesma.
J� explicamos, e demos exemplos, que � poss�vel, recomend�vel e normal que uma fun��o invoque outra.

Por�m tamb�m � poss�vel que uma fun��o chame ela mesma, mas � preciso um cuidado especial para n�o cairmos em um looping infinito.

Geralmente, para que uma fun��o n�o fique invocando ela mesma indefinidamente, devemos fazer umas altera��es no argumento, ao invocar novamente a fun��o ao passo que devemos definir, na fun��o, testes condicionais sobre o par�metro para saber onde devemos parar de invocar a fun��o.
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



