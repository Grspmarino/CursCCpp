#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //usar acentos 
    setlocale(LC_ALL,"");

    int a = 10;

    //conectivo lógico E (AND)
    if (a > 5 && a > 15){
        printf("\nA variavel 'a' está entre 5 e 15");
    }
    
     //conectivo lógico OU (OR)
    if (a > 5 || a > 15){
        printf("\nA variavel 'a' é maior que 5 ou 15");
    }

     //Misturando conectivos
    if ((a > 5 && a < 15) || a == 20){
        printf("\nA variavel 'a' está entre 5 e 15 ou ela vale 20");
    }

    getchar();
}