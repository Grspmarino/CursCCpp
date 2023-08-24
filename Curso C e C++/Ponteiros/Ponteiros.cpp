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

    //Declarando variaveis
    int a = 20;

    //imprimindo o valor de uma variavel 
    printf("O valor de a : %d\n", a);

    //imprimindo o endereço de uma variavel 
    printf("O endereço de a : %d\n", &a);

    //Variaveis armazenma valores 
    int b = 10;

    //Ponteiros armazenam posiçoes da memoria 
    int *ponteiro;
    
    //Ponteiro recebendo a posição da memória da variavel b 
    ponteiro = &b;

    //Lendo o valor de uma variavel
    cout << "Digite um novo valor para a : ";
    scanf("%d",&a);

    //Imprimindo o valor de uma variavel
    cout << "O valor atual de a : " << a <<" ";

    return 0;
}