#include <stdio.h>
#include <stdlib.h>

/* Este programa le a quantidade Bytes armazenados em cada 
vari�vel atrav�s daa fun��o sizeof()*/

char main(int argc, char *argv[]) {
	system ("color 9f");
	
	char c;
    unsigned char uc;
    signed char sc;
    int i; 
    long int li;
    short int si;
    unsigned int ui;
    signed int sgi;
    unsigned short int usi;
    
    unsigned long int uli;
    float f;
    double d;
    long double ld;
    
	printf("**************** TAMANHO DAS VARI�VEIS EM BYTES ********************: \n");
    printf("char %d\n"  ,sizeof(c));   		//QUALQUER VARI�VEL DO TIPO CHAR PODE SER CHAMADA POR %c
    printf("unsigned char %d\n",sizeof(uc));
    printf("signed char %d\n",sizeof(sc));   ////////VALE PARA TODASSS**
    printf("int %i\n",sizeof(i));
     printf("long int %li\n",sizeof(li));
     printf("short int %i\n",sizeof(si));
     printf("Signed int %i\n",sizeof(sgi));
    printf("unsigned int %u\n",sizeof(ui));
    printf("unsigned short int %hu\n",sizeof(usi));
    printf("unsigned long int %lu\n",sizeof(uli));
    printf("float %d\n",sizeof(f));//a forma de chamar a vari�vel � %f
    printf("double %d\n",sizeof(d));//a forma de chamar a vari�vel � %if
    printf("long double %d\n",sizeof(ld));//a forma de chamar a vari�vel� %Lf
system("pause");
	
	return 'a';
}
