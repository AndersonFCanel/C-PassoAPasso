#include <stdlib.h>
#include <stdio.h>
// função sem nome e argumentos RESOLVIDA	
float g(float x,float y){
   
   x=(x+2*y+1);
return x;
}

int main(){
    float a=5,b=5, conta;

    conta= g(a,b);
    printf("%f ",conta);

return 0;
}
