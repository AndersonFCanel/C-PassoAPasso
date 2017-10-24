

//Note que, enquanto n n�o for igual a 0,
// a fun��o fat chama a si mesma,
//cada vez com um valor menor. n=0 � crit�rio de parada para esta fun��o.



int fat (int n){
if(n>0){
   return n*fat(n-1);
   }else {  // n=0 � o criterio de parada para essa fun��o recursiva
          return 1;// retorno de fatoria de 0
          }
}

int main(){

int n;//numero a ser recebido
printf("Digite um valor para n: ");
scanf("%d",&n);
printf("\n O fatorial de %d e' %d",n,fat(n));


getch();



return 0;
}

/*\O fatorial de um n�mero n (n pertence ao conjunto dos n�meros naturais) � sempre o produto de todos os seus antecessores, incluindo si pr�prio e excluindo o zero. A representa��o � feita pelo n�mero fatorial seguido do sinal de exclama��o, n! . Exemplo de n�mero fatorial:

6! = 6 . 5 . 4 . 3 . 2 . 1 = 720

Importante: n >= 0 (n maior ou igual a zero) , ou seja, n�o existe fatorial para n�meros negativos.

* O fatorial de 0 ( 0! ) � 1, pois o produto de n�mero nenhum � 1.*/
