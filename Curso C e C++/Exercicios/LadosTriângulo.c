#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //usar acentos 
    setlocale(LC_ALL,"");

    //variaveis 
    float ladoa;
    float ladob;
    float ladoc;
        
    //lendo valores 
    printf("Digite o lado A do triângulo: ");
    scanf("%f", &ladoa);

    printf("Digite o lado B do triângulo: ");
    scanf("%f", &ladob);

    printf("Digite o lado C do triângulo: ");
    scanf("%f", &ladoc);

    if (ladoa == ladob && ladob == ladoc){
        printf("\nTodos os lados são iguais.");
        printf("\nO Triângulo equilátero pode ser formado!\n");
    }else if(ladoa == ladob || ladob == ladoc || ladoa == ladoc){
        printf("\nDois lados são iguais.");
        printf("\nO Triângulo Isósceles pode ser formado!\n");}
        else{
            printf("\nTodos os lados são diferentes.");
            printf("\nO Triângulo Escaleno pode ser formado!\n");
        }

    getchar();

}