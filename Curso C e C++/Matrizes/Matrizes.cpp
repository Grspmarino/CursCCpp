#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <iostream>

using namespace std;

int main()
{
    // usar acentos
    setlocale(LC_ALL, "");

    //Criando uma matriz
    int matriz[2][2],i,j;

    //passando os valores
    matriz[0][0] = 1;
    matriz[0][1] = 2;
    matriz[1][0] = 3;
    matriz[1][1] = 4;

    //imprimindo valores na tela
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
        //cout << "\ni = " << i << " , j = " << j;
        cout << matriz[i][j] << " ";
        } 
        cout << "\n";
    }

    //lendo valores para a matriz
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
        cin >> matriz[i][j];
        } 
    }

    //imprimindo valores na tela
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
        //cout << "\ni = " << i << " , j = " << j;
        cout << matriz[i][j]  << " ";
        } 
        cout << "\n";
    }

    return 0;
}