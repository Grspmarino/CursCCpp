#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //usar acentos 
    setlocale(LC_ALL,"");

    //variveis 
    int num1;
    int num2;
    int num3;
    int resultado;

    printf("Digite tres números: ");
    scanf("%d %d %d", &num1,&num2,&num3);

    resultado= num1*num2*num3;

    printf("A miultiplicação desses 3 números é %d", resultado);

    //pausando 
    getchar();
}