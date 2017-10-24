#include <stdio.h>
#include <stdlib.h>
#include "funcao.h"


int main()
{
    int a;
    printf("Digite um numero ara verificar se ele e par ou impar: ");
    scanf("%d",&a);
    if (Epar(a))
        printf("\n\nO numero e par!\n\n");
    else
        printf("\n\nO numero e impar\n\n!");
    return 0;
}
