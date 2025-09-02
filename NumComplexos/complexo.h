#ifndef COMPLEXO_H
#define COMPLEXO_H

typedef struct {
    int x;
    int y;
} Complexo;

Complexo* criarComplexo(int x, int y);
void imprimirComplexo(Complexo *n);
void destruirComplexo(Complexo *n);
Complexo* somaComplexo(Complexo *n1, Complexo *n2);
Complexo* subComplexo(Complexo *n1, Complexo *n2);

#endif
