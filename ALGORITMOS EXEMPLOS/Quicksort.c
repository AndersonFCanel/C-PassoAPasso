		//https://pt.m.wikipedia.org/wiki/Quicksort
# include<stdio.h> 
# include<stdlib.h> 
# define TAM 10 

void quick(int vet[], int esq, int dir){
	 int pivo = esq, i,ch,j; //Declaração das variavés e inicialização do pivo com o primeiro algarismo da sequencia 			
	 printf("ESQ  VALE: %d\n",esq); //Imprime na tela a mensagem.
	 printf("DIR  VALE: %d\n",dir); //Imprime na tela a mensagem.
	 printf("CH  VALE: %d\n",ch); //Imprime na tela a mensagem.
	 printf("I  VALE: %d\n",i); //Imprime na tela a mensagem.
	 printf("J	 VALE: %d\n\n\n",j); //Imprime na tela a mensagem.
	 printf("INICIO DO PROCEDIMENTO \n"); //Imprime na tela a mensagem.
    
	for(i=esq+1;i<=dir;i++){ //Percorre todos os espaços do vetor 
        printf("LACO MAIOR \n"); //Imprime na tela a mensagem.

		j = i; //atribuição de valor 
	
		if(vet[j] < vet[pivo]){ //verifica se o vetor da posição pivo é maior que de outra posição
			printf("ENTRA NO LAÇO QUANDO VET[J]<VET[I] \n"); //Imprime na tela a mensagem.		
			ch = vet[j]; //ch recebe o valor que é menor 
	    	printf("PIVO AGORA VALE: %d\n",pivo); //Imprime na tela a mensagem.
			
			while(j > pivo){ //repete enquanto o j que é a posição do algarismo menor que o pivo ficar na posição 0 
 					printf("LACO ENQUANTO J>PIVO \n"); //Imprime na tela a mensagem.
					printf("VALORES ATUAIS DE VET[J]:%d e VET[J-1]:%d \n",vet[j],vet[j-1]); //Imprime na tela a mensagem.
					vet[j] = vet[j-1]; //reorganiza a posição de vetores
					printf("VET[J]:%d TROCOU DE POSICA COM VET[J-1]:%d \n",vet[j],vet[j-1]); //Imprime na tela a mensagem.
				    j--; //decremento para a organização
					printf("J FOI DECREMENTADO E AGORA VALE: %d\n",j); //Imprime na tela a mensagem.
			} 
			
			vet[j] = ch; // atribuição da variavel menor que o pivo na posição inicial 
			printf("VET[j] AGORA VALE: %d",vet[j]); //Imprime na tela a mensagem.
			pivo++; // aumenta a posição do pivo em uma unidade
			printf("PIVO AGORA VALE: %d\n",pivo); //Imprime na tela a mensagem.
		 } 
  }

	 if(pivo-1 >= esq){ // verifica se o valor do pivo é maior que o final do vetor.
		printf("PRIMEIRO IF RECURSIVO EBTRA CASO PIVO-1 >=ESQ\n\n"); //Imprime na tela a mensagem.
		   quick(vet,esq,pivo-1); //final da execursão da função
	 }
	 if(pivo+1 <= dir){ //verifica se o valor do pivo é menor, indicando que ainda estar dentro das limitações do vetor 			     
			printf("SEGUNDO IF RECURSIVO EBTRA CASO PIVO+1 <=DIR\n\n"); //Imprime na tela a mensagem.
     	   quick(vet,pivo+1,dir); //chama a função para eecutar novamente
 	 }
 }
// MAIN()
 int main(){

 
	int vet[TAM],i; //Declara a variavel i e o vetor vet com {{subst:Número2palavra2|10}} posições de 0 a 9. 
	vet[0]=28;
	vet[1]=22;
	vet[2]=27;
	vet[3]=42;
	vet[4]=46;
	vet[5]=24;
	
	/*
	printf("Digite 10 numeros: \n"); //Imprime na tela a mensagem.
	 for(i=0;i<TAM;i++) //Percorrertodo os espaços do vetor 
		scanf("%d",&vet[i]); //armazena os dados coletados todo no vetor
	*/quick(vet,0,TAM-1); //Chama a função quick com os tres parametros: o vetor, 0 o inicio do vetor e o fim. 

	for(i=0;i<TAM;i++) //percorre o vetor
		 printf("%d ",vet[i]); //imprime o vetor reorganizado
        printf("\n"); 
  
  return 0;
 }

