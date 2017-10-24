#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct{
char modelo[30];
float potenciaMotor;
int anoFabricacao,
numPortas;
}CARRO;

void Exibe(CARRO car){
printf("\n\n\nExibindo carro\n");
printf("Modelo: %s\n",car.modelo);
printf("Motor: %.1f\n",car.potenciaMotor);
printf("Ano: %d\n",car.anoFabricacao);
printf("%d portas\n",car.numPortas);
}

int main(void) {
  CARRO fusca;

  printf("Modelo do carro");
  gets(fusca.modelo);
  
  printf("Motor");
  scanf("%f",&fusca.potenciaMotor);
   
  printf("ano: ");
  scanf("%d",&fusca.anoFabricacao);

  printf("Numero de portas: ");
  scanf("%d",&fusca.numPortas);

  Exibe(fusca);

 getch();
	return 0;
}
