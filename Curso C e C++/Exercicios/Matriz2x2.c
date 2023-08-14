#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
 
void main() {
 
    //Para usar acentos
    setlocale(LC_ALL,"");
 
    //Preencha uma matriz 2x2 lendo valores do usuário e
    //depois troque os valores entre a primeira e a segunda linha.
    int matriz[2][2], aux1,aux2, i , j;
 
    //Lendo valores para matriz
    for(i = 0; i < 2 ; i++){
        for(j = 0; j < 2 ; j++){
            printf("Digite um valor:");
            scanf("%d", &matriz[i][j]);
        }
    }

    printf("\n");
 
    //Auxiliares
    aux1 = matriz[0][0];
    aux2 = matriz[0][1];
 
    //Invertendo valores usando auxiliares
    matriz[0][0] = matriz[1][0];
    matriz[0][1] = matriz[1][1];
    matriz[1][0] = aux1;
    matriz[1][1] = aux2;
 
    //Imprimindo nova matriz
    for(i = 0; i < 2 ; i++){
        for(j = 0; j < 2 ; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    getchar();
}
