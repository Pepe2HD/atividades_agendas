#include <stdio.h>
#include "conjunto.h"

int main() {
    // Criar dois conjuntos
    Conjunto *c1 = criarConjuntoVazio(5);
    Conjunto *c2 = criarConjuntoVazio(5);

    printf("\n=== Inserindo elementos ===\n");
    inserirElemento(c1, 1);
    inserirElemento(c1, 2);
    inserirElemento(c1, 3);
    inserirElemento(c1, 19);

    inserirElemento(c2, 1);
    inserirElemento(c2, 2);
    inserirElemento(c2, 3);
    inserirElemento(c2, 19);
    inserirElemento(c2, 25);

    printf("\nConjunto 1: ");
    imprimirConjunto(c1);
    printf("Conjunto 2: ");
    imprimirConjunto(c2);

    printf("\n=== Teste de igualdade ===\n");
    conjuntosIguais(c1, c2);

    printf("\n\n=== Maior e menor valores ===\n");
    printf("Maior valor c1: %d\n", maiorValor(c1));
    printf("Menor valor c1: %d\n", menorValor(c1));

    printf("\n=== Tamanho e vazio ===\n");
    printf("Tamanho c1: %d", tamanhoConjunto(c1));
    conjuntoVazio(c1);

    printf("\n\n=== Removendo elemento 2 do c1 ===\n");
    removerConjunto(c1, 2);
    imprimirConjunto(c1);

    printf("\n=== Interseção ===\n");
    Conjunto *inter = interseccao(c1, c2);
    imprimirConjunto(inter);

    printf("\n=== Diferença (c1 - c2) ===\n");
    Conjunto *diff = diferenca(c1, c2);
    imprimirConjunto(diff);

    printf("\n=== União ===\n");
    Conjunto *uni = uniao(c1, c2);
    imprimirConjunto(uni);

    return 0;
}