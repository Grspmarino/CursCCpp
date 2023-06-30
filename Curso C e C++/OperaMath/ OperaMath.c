#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //usar acentos 
    setlocale(LC_ALL,"");

    //definindo variáveis 
    int a = 6;
    int b = 4;

    //soma 
    printf("\nA soma de %d e %d = %d\n",a,b, a + b );

    //subtração
    printf("\nA subtração de %d e %d = %d\n",a,b, a - b );

    //divisão 
    printf("\nA divisão de %d e %d = %d\n",a,b, a / b );

    //resto da divisão
    printf("\nO resto da divisão entre %d e %d = %d\n",a,b, a % b );

    //multiplicação
    printf("\nA multiplicação de %d e %d = %d\n",a,b, a * b );

    
    //pausando 
    getchar();
}
