#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    // usar acentos
    setlocale(LC_ALL, "");

     int cont;


    for(cont = 10; cont <= 20; cont ++){
        if(cont % 2 ==0)
        printf("\n%d",cont);
    }

  getchar();
} 