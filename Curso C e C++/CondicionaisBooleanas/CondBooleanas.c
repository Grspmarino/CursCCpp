#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

void main(){

    //usar acentos 
    setlocale(LC_ALL,"");

    //variaveis
    bool a = true;
    bool b = false;

    if (a){
        printf("\nA é verdadeira");
    }

    if (b){
        printf("\nB é verdadeiro");
    }else{
        printf("\nB é falso");
    }

    //comparando uma falsidade 
    if (!b){
        printf("\nB é falso");
    }
    
    
    

 getchar();
}
