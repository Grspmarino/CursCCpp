#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main (){
    
    //usar acentos 
    setlocale(LC_ALL,"");

    //defenindo uma variável 
    int a = 5, b;

    //imprimindo a variável a
    printf("%d\n", a);

    //concatenando
    printf("O valor da var a é: %d\n", a);

    //mudando o valor de a
    a = 15;

    //concatenando
    printf("O valor da var a é: %d\n", a);

    //lendo valores 
    scanf("%d", &b);

    //concatenando
    printf("O valor da var b é: %d\n", b);

    //imprimindo
    printf("Uhuu\n");

    //pausando 
    getchar();
    return 0;
}