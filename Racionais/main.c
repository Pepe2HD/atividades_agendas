/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include "racional.h"

int main()
{
    int num, den;
    printf("Vamos criar um número racional!\nDigite o numerador dessa número:");
    scanf("%d", &num);
    
    printf("E agora o denominador: ");
    scanf("%d", &den);
    
    Racional r1 = criarNumRacional(num, den);
    imprimeRacional(r1);
    
    printf("\n\nAgora vamos para o proximo número racional!\nDigite o numerador dessa número:");
    scanf("%d", &num);
    
    printf("E agora o denominador: ");
    scanf("%d", &den);
    
    Racional r2 = criarNumRacional(num, den);
    imprimeRacional(r2);
    
    Racional soma = somaRacionais(r1, r2);
    
    printf("\n\nSoma: ");
    imprimeRacional(r1);
    printf(" + ");
    imprimeRacional(r2);
    printf(" = ");
    imprimeRacional(soma);
    
    Racional mult = multiplicaRacionais(r1, r2);
    
    printf("\n\nMultiplição: ");
    imprimeRacional(r1);
    printf(" * ");
    imprimeRacional(r2);
    printf(" = ");
    imprimeRacional(mult);
    
    testaIgual(r1, r2);
    
}