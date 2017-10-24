#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int voto, contadorVoto, quantVotantes;
	int votosFreixo, votosJandira, votosMolon;
	printf("Entre com a quantidade de votantes:");
	scanf("%d",&quantVotantes);
	contadorVoto = 0;
	votosFreixo = 0;
	votosJandira = 0;
	votosMolon = 0;
	system("color F1");

	do {
		
		system("cls");
		
		printf("\n\n============= PARA QUEM VAI SEU VOTO ? =============\n");
		printf("= 50 - Marcelo Freixo                              =\n");
		printf("= 13 - Jandira Fegalli                             =\n");
		printf("= 18 - Alessandro Molon                            =\n");
		printf("====================================================\n");
		printf("%d - ENTRE COM SEU VOTO____________________________:", contadorVoto+1);
		scanf("%d",&voto);
		
		if(voto==50){
			votosFreixo++;
		    contadorVoto++;
		}
		
		else if(voto==13){
			votosJandira++;
			contadorVoto++;

		}
		
		else if(voto==18){
			votosMolon++;
			contadorVoto++;

		} else {
			printf("\n\nVOTO INVALIDO, PRESSIONE UMA TECLA PARA VOTAR NOVAMENTE!");
			getch();
		}
		
		
	} while (contadorVoto<quantVotantes);

    system("cls");

	printf("\n\n");
	printf("========= RESULTADO DA ELEICAO =========\n");
	printf("Votos do Freito___________:%d\n",votosFreixo);
	printf("Votos da Jandira__________:%d\n",votosJandira);
	printf("Votos do do Molon_________:%d\n",votosMolon);
	printf("========================================\n\n");
	
	if( (votosFreixo > votosJandira) && (votosFreixo > votosMolon)){
		printf("\n\nVencedor: Freixo ");
	}
	
	else if( (votosJandira > votosMolon) && (votosJandira > votosFreixo)){
		printf("\n\nVencedor: Jandira ");
	}
	
	else if( (votosMolon > votosJandira) && (votosMolon > votosFreixo)){
		printf("\n\nVencedor: Molon ");
	}
	
	else {
		printf("\n\nEMPATE");
	}

	getch();	
	
}