#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10

void main()
{

    // usar acentos
    setlocale(LC_ALL, "");
    
    printf("%d", TAM);

    int i;

    for(i = 1;i <= TAM;i++){
        printf("\n%d", i);
    }

    getchar();

}