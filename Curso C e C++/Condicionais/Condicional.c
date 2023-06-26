#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //usar acentos 
    setlocale(LC_ALL,"");

    //variaveis
    int a = 5;
    float b = 2.5;

    printf("a = %d\nb = %f", a,b);

    //condicional simples
    if(a == 5){
        printf("\nA variavel a = 5");
    }

    if(b == 2.5){
        printf("\nA variavel b = 2.5");
    }

    //núemro par ou impar
    if(a % 2 ==1){
        printf("\nA variavel a é impar");
    }else {
        printf("\nA variavel a é par");
    }

    

    getchar();
}