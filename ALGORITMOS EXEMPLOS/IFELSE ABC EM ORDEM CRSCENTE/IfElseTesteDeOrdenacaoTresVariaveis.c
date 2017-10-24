#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c;
	
	printf("Digite um numero: ");
	scanf("%d",&a);
	printf("\nDigite outro numero: ");
	scanf("%d",&b);
	printf("\nDigite outro numero: ");
	scanf("%d",&c);
	   
 //abc
	if((a<=b)&&(a<=c)&&(b<=c)){
		printf("%d-%d-%d",a,b,c);
	} else // cba
	        if((a>=b)&&(a>=c)&&(a>=c)){    
		   printf("%d-%d-%d",c,b,a);
	        }else//acb
	              if((a<=b)&&(a<=c)&&(c<=b)){
		          printf("%d-%d-%d",a,c,b);
	              }else //bca
	                    if((b<=c)&&(b<=a)&&(c<=a)){
		                printf("%d-%d-%d",b,c,a);
	                    }else//bac	
			                  if((b<=a)&&(b<=c)&&(a<=c)){
		                      printf("%d-%d-%d",b,c,a);
				              }else//cab
					               if((c<=a)&&(c<=b)&&(a<=b)){
		                           printf("%d-%d-%d",c,a,b);
		                           }else//a=b=c
		                           	    if((a=b)&&(a=c)&&(b=c)){
		                                printf("%d-%d-%d",a,b,c);
                                        }



	        
	return 0;
}

/*algoritmo "ordem cerscente"
var
n1, n2 ,n3: real
inicio
// Seção de Comandos
//entrada
Escreva("Digite um numero: ")
leia(n1)
Escreva("Digite outro numero: ")
leia(n2)
escreva("Digite outro número: ")
leia(n3)
//abc
se (n1<=n2) e (n1<=n3) e (n2<=n3) entao
   escreval(n1,n2,n3)
 senao
//cba
se (n1>=n2) e (n1>=n3) e (n2>=n3) entao
    escreval(n3 ,n2 ,n1)
 senao
//acb
se (n1<=n2) e (n1<=n3) e (n3<=n2) entao
   escreval(n1,n3,n2)
 senao
//bca
se (n2<=n3) e (n2<=n1) e (n3<=n1)entao
   escreval(n2,n3,n1)
senao
//bac
se (n2<=n1) e (n2<=n3) e (n1<=n3) entao
   escreval(n2,n1,n3)
senao
//cab
se (n3<=n1) e (n3<=n2) e (n1<=n2) entao
escreval(n3,n1,n2)
senao
//a=b=c
se (n1=n2) e (n2=n3) e (n3=n1) entao
escreval(n1,n2,n3)
fimse
fimse
fimse
fimse
fimse
fimse
fimse
escreval
fimalgoritmo */
