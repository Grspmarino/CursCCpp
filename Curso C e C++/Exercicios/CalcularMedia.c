#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //usar acentos 
    setlocale(LC_ALL,"");

    //variaveis 
    float nota1;
    float nota2;
    float nota3;
    float resultado;

    //lendo valores 
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    //Média das notas 
    resultado = (nota1+nota2+nota3)/3;
    printf("\n A média das notas %f, %f e %f são =%f\n", nota1,nota2,nota3, resultado);


    //pausando 
    getchar();
}
