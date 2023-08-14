#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>
#include <iostream>
#include <string.h>

using namespace std;

int main() {
 
    //Para usar acentos
    setlocale(LC_ALL,"");

    // Declarando variaveis 
    int a;
    float b;
    char c;
    bool d;

    //Passando valores
    a = 10;
    b = 2.8;
    c = 'w';
    d = true;

    //Escrever as variaveis na tela 
    printf("O valor de a: %d\nO valor de b: %.9f\nO valor de c: %c\nO valor de d: %d\n", a,b,c,d);

    //Imprimindo com cpp
    cout << "oi\n";
    cout << "O valor de a: " << a << "! \n";

    cout << "\n";

    //lendo valores 
    scanf("%d", &a);
    scanf("%f", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    //lendo valores com cpp
    cin >> a;

    cout << "Valor : " << a << "\n";


    return 0;
}