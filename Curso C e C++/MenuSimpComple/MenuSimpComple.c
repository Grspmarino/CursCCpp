#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    // usar acentos
    setlocale(LC_ALL, "");

    int opcao;

    while (opcao < 1 || opcao > 3)
    {

        printf("Escolha uma opção: ");
        printf("\n1- Opção 1 ");
        printf("\n2- Opção 2 ");
        printf("\n3- Opção 3 \n\n");

        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            printf("\nOpção escolhida: 1\n");
            break;
        case 2:
            printf("\nOpção escolhida: 2\n");
            break;
        case 3:
            printf("\nOpção escolhida: 3\n");
            break;
        default:
            printf("\nOpção invalida\n");
            break;
        }
    }

    getchar();
}