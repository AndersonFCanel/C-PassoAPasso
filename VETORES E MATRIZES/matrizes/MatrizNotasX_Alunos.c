#include <stdio.h>
#include <stdlib.h>

/* Esse programa tem como por objetivo criar
uma matriz(vetor multidimensional) na qual é lid o n valores das notas de
quatro alulos durante os quatro bimestres do um ano*/
int main(void){
   const int bimestresanuais=4;  // estou usando const para fixar um valor a variável
   const int numerodealunos=4;  //poderia ser uma variavel comum onde poderia ser atribuidos valores

   float notasalunos[numerodealunos][bimestresanuais]={0};
   float mediaalunos[numerodealunos]={0};
   float media=0;


   int aluno,notas; //variável contadora a ser usada no laço for (indices)
 
    //entrada de dados no programa

    printf("Insira  as 4 notas do aluno 1: \n")
         for(aluno=0;aluno<numerosdealunos;aluno++){
            for(notas;notas<bimestresanuais;notas++){
                scanf("%f",&notasalunos[aluno][notas]);//aluno 0 com nota 0 aluno 1 com nota 1
                media+=notasalunos[aluno][notas];//

            }//saindo do laço for interno
        mediaalunos[aluno]= media/bimestresanuais;
        media=0;
        printf("Insira as quatro notas do aluno %i ",aluno+2);
         }

         for(aluno=0;aluno<numerodealunos;aluno++){
            printf("A media do aluno %i e: %.2f\n ",aluno+1,mediaalunos[aluno]);
         }

        return 0;
}
