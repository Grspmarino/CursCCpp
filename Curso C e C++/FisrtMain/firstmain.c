#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
   
    //perite usar acentos 
    setlocale(LC_ALL,"");

    //Imprime "olá" na tela 
    printf("Olá\n");

    //lendo valor inteiro
    int a = 50;
    printf("O valor de a é = %d\n\n", a);
    scanf("%d", &a);
    printf("O valor de a mudou para %d\n\n", a);
    
    //lendo valor quebrado
    float b = 5.5;    
    printf("O valor de b é = %f\n\n", b);
    scanf("%f", &b);
    printf("O valor de b mudou para %f\n\n", b);

    //lendo letra
    char c = 't';    
    printf("O valor de c é = %c\n\n", c);
    __fpurge(stdin);
    scanf("%c", &c);
    printf("O valor de c mudou para %c\n\n", c);

}

