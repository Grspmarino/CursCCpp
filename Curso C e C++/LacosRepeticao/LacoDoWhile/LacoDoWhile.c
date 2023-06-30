#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    // usar acentos
    setlocale(LC_ALL, "");

    int a = 1;

    //primeiro conefere a condição, depois repete o bloco
    // contando até 10
    while (a <= 10){

        // imprimindo 'a' na tela
        printf("\n%d\n", a);

        // incremento
        a++; // é a mesma coisa que a = a + 1;
    }

    //alterando o valor de 'a'
    a = 1;

    //primeiro executa uma vez, depois conefere a condição 
    do{
        // imprimindo 'a' na tela
        printf("\n%d\n", a);

        // incremento
        a++; // é a mesma coisa que a = a + 1;
    } while (a <= 10);

    getchar();
}