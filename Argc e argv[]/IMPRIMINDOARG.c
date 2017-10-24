#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(int argc, char *argv[])
{

printf("\nARGC: %d",argc);

int i;
for( i=0;i<argc;i++)
{printf("\nARGC: %s",argv[i]);
}
getch();

return 0;
}
