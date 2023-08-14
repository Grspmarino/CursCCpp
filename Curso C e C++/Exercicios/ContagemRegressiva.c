#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    // usar acentos
    setlocale(LC_ALL, "");

     int a = 10;

    while (a >= 0){

        // imprimindo 'a' na tela
        printf("\n%d\n", a--);

    }

  getchar();
} 