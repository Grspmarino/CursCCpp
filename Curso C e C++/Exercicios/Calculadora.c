#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //usar acentos 
    setlocale(LC_ALL,"");

    //variaveis 
    float num1;
    float num2;
    float somar;
    float subtrair;
    float dividir;
    float multiplicar;
    int operacao;

    //lendo valores 
    printf("\nDigite o primeiro valor: ");
    scanf("%f", &num1);

    printf("\nDigite o segundo valor: ");
    scanf("%f", &num2);

    printf("\n\nEscolha a opreção: \n\n 1- Adição \n 2- Subtração \n 3- Divisão \n 4- Multiplição \n");
    scanf("%d", &operacao);

    somar = num1 + num2;
    subtrair = num1 - num2;
    dividir = num1 / num2;
    multiplicar = num1 * num2;


switch (operacao){
        case 1:
            printf("\nResultado é igual a %.2f\n", somar);
            break;
        case 2:
            printf("\nResultado é igual a %.2f\n", subtrair);
            break;
        case 3:
            printf("\nResultado é igual a %.2f\n", dividir);
            break;
        case 4: 
            printf("\nResultado é igual a %.2f\n", multiplicar);
            break;
        default: 
            printf("\nOpção invalida" );
            break;
    }
 
    getchar();
}
