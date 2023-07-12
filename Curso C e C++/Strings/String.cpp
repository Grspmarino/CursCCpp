#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    // usar acentos
    setlocale(LC_ALL, "");

    //Declarando uma string
    string palavra;

    //Imprimindo na tela 
    cout << "Digite uma palavra: ";

    //lendo uma string
    cin >> palavra;

    //imprimindo uma variavel 
    cout << "\nA palavra é : " << palavra;
    
    return 0;
}
