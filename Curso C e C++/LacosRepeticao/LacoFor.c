#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){

    // usar acentos
    setlocale(LC_ALL, "");

    int cont;

   /** //tabuada do 5
    for (cont = 1; cont <= 10; cont++){
        printf("\n 5 X %d = %d", cont, 5 * cont);
    }

    //contando de 2 em 2 
    for (cont = 1; cont <= 10; cont + 2){
        printf("\n%d", cont);
    }
    */


        //Tabuada do 5
    for(cont = 0; cont <= 10; cont++){
        printf("\n 5 X %d = %d",cont, 5 * cont);
    }
 
    printf("\n");

    //Contando de 2 em 2
    for(cont = 0; cont <= 10; cont = cont + 2){
        printf("\n%d",cont);
    }
 
    printf("\n");

    //Contagem regressiva
    for(cont = 10; cont > 0; cont--){
        printf("\n%d", cont);
    }

    getchar();

}