#ifndef CONJUNTO_H
#define CONJUNTO_H

typedef struct {
    int *elementos;
    int qtd;
    int capacidade;
} Conjunto;

Conjunto* criarConjuntoVazio(int capacidade);
void inserirElemento(Conjunto *c, int elem);
int verificarElemento(Conjunto *c, int elem);
void removerConjunto(Conjunto *c, int elem);
Conjunto* interseccao(Conjunto *c1, Conjunto *c2);
Conjunto* diferenca(Conjunto *c1, Conjunto *c2);
Conjunto* uniao(Conjunto *c1, Conjunto *c2);
int maiorValor(Conjunto *c);
int menorValor(Conjunto *c);
void conjuntosIguais(Conjunto *c1, Conjunto *c2);
int tamanhoConjunto(Conjunto *c);
void conjuntoVazio(Conjunto *c);
void imprimirConjunto(Conjunto *c);

#endif