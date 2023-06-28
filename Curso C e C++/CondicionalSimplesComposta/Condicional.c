#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //usar acentos 
    setlocale(LC_ALL,"");

    //variaveis
    int a = 5, opcao = 1;
    float b = 2.5;
    char c = 'x';

    printf("a = %d\nb = %f\nc = %c", a,b,c);

    //condicional simples
    if(a == 5){
        printf("\nA variavel a = 5");
    }

    if(b == 2.5){
        printf("\nA variavel b = 2.5");
    }

    if(c == 'x'){
        printf("\nA variavel c = Letra X");
    }

    //núemro par ou impar
    if(a % 2 ==1){
        printf("\nA variavel a é impar");
    }else {
        printf("\nA variavel a é par");
    }

    //condicional composta 
    if(opcao == 1){
        printf("\nA opcao = 1");
    }else if(opcao ==2){
        printf("\nA opcao = 2");
    }else{
        printf("A opcao não é igual a 1 e nem 2");
    }

    getchar();
}