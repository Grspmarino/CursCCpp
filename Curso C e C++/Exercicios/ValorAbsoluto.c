#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

void main(){

    //usar acentos 
    setlocale(LC_ALL,"");

    //variaveis 
    double nota1;
    double nota2;
    double resultado;

    //lendo valores 
    printf("Digite a primeira nota: ");
    scanf("%lf", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%lf", &nota2);

    //valor absoluto
    resultado = nota1 - nota2 ;
    printf("\nO valor absoluto da diferença = %lf\n", fabs(resultado));
    
    getchar();

}