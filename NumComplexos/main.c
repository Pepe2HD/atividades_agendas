#include "complexo.h"
#include <stdio.h>

int main() {
    Complexo *n1 = criarComplexo(1, -2);
    Complexo *n2 = criarComplexo(3, 2);

    printf("Número complexo n1: ");
    imprimirComplexo(n1);
    printf("\nNúmero complexo n2: ");
    imprimirComplexo(n2);

    Complexo *soma = somaComplexo(n1, n2);
    printf("\nSoma: ");
    imprimirComplexo(soma);

    Complexo *sub = subComplexo(n1, n2);
    printf("\nSubtração: ");
    imprimirComplexo(sub);

    destruirComplexo(n1);
    destruirComplexo(n2);
    destruirComplexo(soma);
    destruirComplexo(sub);

}
