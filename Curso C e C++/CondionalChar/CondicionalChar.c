#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //usar acentos 
    setlocale(LC_ALL,"");

    //variaveis
    char letra = 'x';

    //condicional simples
    if (letra == 'x'){
        printf("\nA letra é x");
    }

    printf("\nCódigo da letra = %d", letra);
    
    if (letra == 120){
        printf("\nA letra é x");
    }
    
    getchar();
}