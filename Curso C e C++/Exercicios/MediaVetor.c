#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void main() {
 
    //Para usar acentos
    setlocale(LC_ALL,"");
 
    //Crie um algoritmo que leia um tamanho um vetor e preencha cada posição com um valor
    //depois calcule a média dos valores acessando o vetor.
    int tamanho;
    printf("Qual será o tamanho do vetor?");
    scanf("%d", &tamanho);
 
    float vetor[tamanho];
    float soma;
    int i;

    printf("\n");

    for(i = 0; i < tamanho; i++){
        printf("Digite um valor:");
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i];
    }


    for(i = 0; i < tamanho; i++){
        printf("\nvetor[%d] = %.1f",i, vetor[i]);
    }

    printf("\n");

    printf("\nA média dos valores é: %.1f\n", soma/tamanho);
 
    getchar();
}