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
    printf("Digite a nota da P1: ");
    scanf("%f", &nota1);

    printf("Digite a nota da P2: ");
    scanf("%f", &nota2);

    printf("Digite a nota de Trabalho: ");
    scanf("%f", &nota3);

    //Média das notas 
    resultado = ((nota1*0.32)+(nota2*0.48)+(nota3*0.2));
    printf("\n A média final é %.2f\n",resultado);

    if (resultado >= 7){
        printf("\nParabéns! Você foi APROVADO!");
    }else{
        printf("\nSinto Muito, Você foi REPROVADO!");
    }
    
    //pausando 
    getchar();
}