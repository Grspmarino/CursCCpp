#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    // usar acentos
    setlocale(LC_ALL, "");

    int a = 1;
    int b = 10;

    // contando até 10
    while (a <= 10){

        // imprimindo 'a' na tela
        printf("\n%d\n", a);

        // incremento
        a++; // é a mesma coisa que a = a + 1;
    }

    // contagem regressiva
    while (b >= 1){

        // imprimindo 'b' na tela
        printf("\n%d", b);

        // incremento
        b--; //é a mesma coisa que b = b - 1;
    }

    getchar();
}