#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

void main()
{
    // usar acentos
    setlocale(LC_ALL, "");

    char palavra[15];

    //instrução 
    printf("Digite uma palavra: ");

    //limpar o bufffer
    setbuf(stdin, 0);

    //ler a string
    fgets(palavra, 15, stdin);

    //limpa palavras não ultilizadas 
    palavra[strlen(palavra)-1] = '\0';

    //imprime a palavra
    printf("\n\n%s", palavra);

    getchar();
}
