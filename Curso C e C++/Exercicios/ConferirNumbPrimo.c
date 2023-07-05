#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main()
{

    // usar acentos
    setlocale(LC_ALL, "");

    int num;
    int i;
    int result = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    for (i=2 ;i <= num / 2; i++){
        if (num % i == 0)
        {
            result++;
        }
    }

    if (result == 0)
        printf("%d é primo \n", num);
    else{
        printf("%d não é primo \n", num);
    }

    getchar();
}