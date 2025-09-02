#include <stdio.h>
#include "racional.h"

Racional criarNumRacional(int num, int den) {
    Racional r;
    r.num = num;
    r.den = den;
    return r;
}

int MDC(int a, int b) {
    if (b == 0)
        return a;
    return MDC(b, a % b);
}

Racional simplificarFracoes(int num, int den) {
    Racional r;
    int divisor = MDC(num, den);
    r.num = num / divisor;
    r.den = den / divisor;
    return r;
}

Racional somaRacionais(Racional r1, Racional r2) {
    Racional r;
    r.num = r1.num * r2.den + r1.den * r2.num;
    r.den = r1.den * r2.den;

    return simplificarFracoes(r.num, r.den);
}

Racional multiplicaRacionais(Racional r1, Racional r2) {
    Racional r;
    r.num = r1.num * r2.num;
    r.den = r1.den * r2.den;
    
    return simplificarFracoes(r.num, r.den);
}

void testaIgual(Racional r1, Racional r2) {
    Racional r;
    r.num = r1.num;
    r.den = r1.den;
    
    Racional rac1 = simplificarFracoes(r.num, r.den);
    
    r.num = r2.num;
    r.den = r2.den;
    
    Racional rac2 = simplificarFracoes(r.num, r.den);
    
    if((rac1.num == rac2.num) && (rac1.den == rac2.den)) {
        printf("\n\nOs dois números racionais são iguais!");
    } else {
        printf("\n\nOs dois números racionais não iguais!");
    }
}


void imprimeRacional(Racional r) {
    printf("%d/%d", r.num, r.den);
}