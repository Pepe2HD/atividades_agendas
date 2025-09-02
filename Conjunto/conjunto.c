#include "conjunto.h"
#include <stdlib.h>
#include <stdio.h>

Conjunto* criarConjuntoVazio(int capacidade) {
    Conjunto *c = malloc(sizeof(Conjunto));
    
    if(c == NULL) {
        printf("Não foi possivel alocar a memoria!");
        return NULL;
    }
    
    c->elementos = malloc(capacidade * sizeof(int));
    if(c->elementos == NULL) {
        printf("Não possivel alocar memoria para os elementos!");
        free(c);
        return NULL;
    }
    
    c->qtd = 0;
    c->capacidade = capacidade;
    
    return c;
}

int verificarElemento(Conjunto *c, int elem) {
    for(int i = 0; i < c->qtd; i++) {
        if(elem == c->elementos[i]) {
            return i;
        }
    }
    return -1;
}


void inserirElemento(Conjunto *c, int elem) {
    if(c->qtd == c->capacidade) {
        c->capacidade = c->capacidade * 2;
        int *temp = realloc(c->elementos, c->capacidade * sizeof(int));
        if (temp == NULL) {
            printf("Erro ao realocar memória!\n");
            return;
        }
        c->elementos = temp;

        inserirElemento(c, elem);
    } else {
        int verif = verificarElemento(c, elem);
        
        if(verif != -1) {
            printf("\nO número já existe no conjunto!");
        } else{
            c->elementos[c->qtd] = elem;
            c->qtd = c->qtd + 1;
            printf("\nElemento adicionado com sucesso!");
        }
    
    }
}

void removerConjunto(Conjunto *c, int elem) {
    int indice = verificarElemento(c, elem);
    
    if(indice == -1) {
        printf("\nElemento não encontrado no conjunto para remoção!");
    } else {
        
        for(int i = indice; i < c->qtd - 1; i++) {
            c->elementos[i] = c->elementos[i+1];
        }
        
        c->qtd = c->qtd - 1;
        
        printf("\nO elemento foi removido com sucesso!");
     }
}

Conjunto* interseccao(Conjunto *c1, Conjunto *c2) {
    Conjunto *res = criarConjuntoVazio(c1->qtd); 
    printf("\nCriando interseção dos conjuntos...\n");

    for(int i = 0; i < c1->qtd; i++) {
        if(verificarElemento(c2, c1->elementos[i]) != -1) { 
            inserirElemento(res, c1->elementos[i]);
        }
    }

    printf("Interseção criada!\n");
    return res;
}

Conjunto* diferenca(Conjunto *c1, Conjunto *c2) {
    Conjunto *res = criarConjuntoVazio(c1->qtd); 
    printf("\nCriando diferença do primeiro conjunto em relação ao segundo...\n");

    for(int i = 0; i < c1->qtd; i++) {
        if(verificarElemento(c2, c1->elementos[i]) == -1) {
            inserirElemento(res, c1->elementos[i]);
        }
    }

    printf("Diferença criada!\n");
    return res;
}

Conjunto* uniao(Conjunto *c1, Conjunto *c2) {
    Conjunto *res = criarConjuntoVazio(c1->qtd + c2->qtd);
    printf("\nCriando união dos conjuntos...\n");

    for(int i = 0; i < c1->qtd; i++) {
        inserirElemento(res, c1->elementos[i]);
    }

    for(int i = 0; i < c2->qtd; i++) {
        if(verificarElemento(res, c2->elementos[i]) == -1) { 
            inserirElemento(res, c2->elementos[i]);
        }
    }

    printf("União criada!\n");
    return res;
}


int maiorValor(Conjunto *c) {
    int maiorValor;
    
    for(int i = 0; i < c->qtd; i++) {
        if(i == 0) {
            maiorValor = c->elementos[i];
        } else {
            if(c->elementos[i] > maiorValor) {
                maiorValor = c->elementos[i];
            }
        }   
        
        
    }
    
    return maiorValor;
}

int menorValor(Conjunto *c) {
    int menorValor;
    
    for(int i = 0; i < c->qtd; i++) {
        if(i == 0) {
            menorValor = c->elementos[i];
        } else {
            if(c->elementos[i] < menorValor) {
                menorValor = c->elementos[i];
            }
        }   
        
        
    }
    
    return menorValor;
}

void conjuntosIguais(Conjunto *c1, Conjunto *c2) {
    if((c1->qtd > c2->qtd) || (c2->qtd > c1->qtd)) {
        printf("\nOs conjuntos não são iguais!");
    } else {
        int cont = 0;
        for(int i = 0; i < c1->qtd; i++) {
            if(c1->elementos[i] != c2->elementos[i]) {
                cont = cont + 1;
            }
        }
        if(cont == 0) {
            printf("\nOs conjuntos são iguais!");
        } else {
            printf("\nOs conjuntos não são iguais!");
        }
    }
    
    
}

int tamanhoConjunto(Conjunto *c) {
    int tamDoConj;
    tamDoConj = c->qtd;
    
    return tamDoConj;
}

void conjuntoVazio(Conjunto *c) {
    if(c->qtd == 0) {
        printf("\nO conjunto é vazio!");
    } else {
        printf("\nO conjunto não é vazio");
    }
}

void imprimirConjunto(Conjunto *c) {
    printf("{ ");
    for(int i = 0; i < c->qtd; i++) {
        printf("%d ", c->elementos[i]);
    }
    printf("}\n");
}
