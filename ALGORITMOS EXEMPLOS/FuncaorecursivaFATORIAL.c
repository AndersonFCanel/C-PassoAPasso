

//Note que, enquanto n não for igual a 0,
// a função fat chama a si mesma,
//cada vez com um valor menor. n=0 é critério de parada para esta função.



int fat (int n){
if(n>0){
   return n*fat(n-1);
   }else {  // n=0 é o criterio de parada para essa função recursiva
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

/*\O fatorial de um número n (n pertence ao conjunto dos números naturais) é sempre o produto de todos os seus antecessores, incluindo si próprio e excluindo o zero. A representação é feita pelo número fatorial seguido do sinal de exclamação, n! . Exemplo de número fatorial:

6! = 6 . 5 . 4 . 3 . 2 . 1 = 720

Importante: n >= 0 (n maior ou igual a zero) , ou seja, não existe fatorial para números negativos.

* O fatorial de 0 ( 0! ) é 1, pois o produto de número nenhum é 1.*/
