#include <stdio.h>
#include <stdlib.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct{
char nomeAluno[30];
char matAluno[20];
float n1;
float n2;
}cadastro_aluno;

cadastro_aluno VetAlunos[100];//variáves do tipo global
int contadordealunos=0; 

void menu(){
	printf("\n===================MENU================================");
    printf("\n1 - Inserir aluno no registro");
    printf("\n2 - Listar alunos, matriculas e suas respectivas medias");
    printf("\n3 - Media Geral");
    printf("\n=======================================================");
    printf("     <ESC> - SAIR \n");
}

void inserir(){
	system("cls");
	cadastro_aluno aluno;
	
  printf("\n\n Inserir aluno no registro: ");
  scanf("%s",&aluno.nomeAluno);
  fflush(stdin);
  
  printf("\nMatricula do Aluno: ");
  scanf("%s",&aluno.matAluno);
  fflush(stdin); 
   
  printf("\nPrimeira nota: ");
  scanf("%f",&aluno.n1);
  fflush(stdin);
  
  printf("\nSegunda Nota: ");
  scanf("%f",&aluno.n2);
  fflush(stdin);
    
	getch();
	VetAlunos[contadordealunos]=aluno;
	contadordealunos++; 
}

void listar (){
    system("cls");
	int i;
	float media=0;
      
	printf("\n\n\t\tLista de alunos, matriculas e suas respectivas medias\n");
    printf("\t\t-----------------------------------------------------------");
    
   for(i=0;i<=contadordealunos; i++){
   	
   	    printf("\n\t\tNOME:  %s ",VetAlunos[i].nomeAluno);
   	    printf("\n\t\tMatricula: %s", VetAlunos[i].matAluno);

          //calcular a média entre os alunos
   	    media=((VetAlunos[i].n1 + VetAlunos[i].n2)/2);
   	  
   	    printf("\n\t\tMedia %.2f", media);
   	   
       }
   
      getch();
}

void mediageral(){
	system("cls");
	int i;
	float media = 0;
	float media_geral =0;
    printf("\n\n ===============Media Geral=================== \n");
    
    for(i=0;i<=contadordealunos;i++){
	   media=((VetAlunos[i].n1 + VetAlunos[i].n2)/2) ;
	   media_geral= media + media_geral;
      }
       media_geral=(media_geral/contadordealunos);
       printf("\n\t\tA Media geral é :  %.2f", media_geral);
       getch();
}

void programa(){}
		

//-------------------------------------MAIN
int main(){
	system("color f1");

	int op;
	do{
		system("cls");
		menu();
		printf("\n Entre com uma opção:__");
		op=getch();
		
		switch(op){
		
		case '1' :
			inserir();
			break;
		case '2' :
		    listar();
		    break;
		case '3' :
		    mediageral();
		    break;
		}
	}while(op!=27);
}
	


