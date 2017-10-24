/************************************************
* Código retirado do site TI Expert
* Visite-nos em WWW.TIEXPERT.NET
*
* Autor: Denys W. Xavier
*************************************************/

#include <iostream>
#include <cstring>
// ou também #include <string.h>
using namespace std;

int main (void){
    char palavra1 [75], palavra2 [25], palavraConcatenada [100];
    // criando vetores de caracteres (strings)
    
    cout << "Digite outra palavra ou uma pequena frase: "<<endl;
    cin.getline (palavra1, 75);
    // método getline pertencente a cin obtem uma linha inteira.
    cout << "Digite uma palavra: "<<endl;
    cin >> palavra2;
    // cin obtem apenas uma palavra
    system ("cls");
    
    cout << "String-1"<<endl;
    cout << "-> "<<palavra1<<endl;
    cout << "tem "<<strlen(palavra1)<<" caracteres"<<endl<<endl;
    //strlen retorna o número de caracteres de uma string
    
    cout << "String-2"<<endl;
    cout << "-> "<<palavra2<<endl;
    cout << "tem "<<strlen(palavra2)<<" caracteres"<<endl<<endl;
    
    if (strcmp (palavra1, palavra2) == 0)
        //strcmp compara duas strings
        cout << palavra1<<" e igual a "<<palavra2<<endl;
    else
        cout << palavra1<<" e diferente de "<<palavra2<<endl;
    
    strcpy (palavraConcatenada, palavra1);
    //strcpy copia o 2o. argumento para o 1o.
    
    strcat (palavraConcatenada, palavra2);
    //strcat concatena (junta) duas strings
    
    cout << "\nA concatenacao de "<<palavra1<<" com "<<palavra2;
    cout << " resulta em "<<palavraConcatenada<<endl;
    system("pause");
    return EXIT_SUCCESS;
}
