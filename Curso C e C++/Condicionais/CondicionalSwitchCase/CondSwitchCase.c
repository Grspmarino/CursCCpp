#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    //usar acentos 
    setlocale(LC_ALL,"");

    int a;
    char b;

    printf("Digite o número: ");
    scanf("%d", &a);

    printf("Digite a letra: ");
    scanf(" %c", &b);

  
    //código de exemplo com if
    /*if(a == 1){
        printf("\nOpção escolhida: 1");
    }else if(a == 2){
        printf("\nOpção escolhida: 2");
    }else if(a == 3){
        printf("\nOpção escolhida: 3");
    }else{
        printf("\nOpção invalida");
    }*/

    //Código adptado ao switch
    switch (a){
        case 1:
            printf("\nOpção escolhida: 1");
            break;
        case 2:
            printf("\nOpção escolhida: 2");
            break;
        case 3:
            printf("\nOpção escolhida: 3");
            break;
        default: 
            printf("\nOpção invalida" );
            break;
    }

    //switch com char
     switch (b){
        case 'x':
            printf("\nA letra é x\n");
            break;
        case 'm':
            printf("\nA letra é m\n");
            break;
        default: 
            printf("\nLetra invalida" );
            break;
     }


    getchar();

}