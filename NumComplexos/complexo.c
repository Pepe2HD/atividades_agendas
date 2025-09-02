#include "complexo.h"
#include <stdlib.h>
#include <stdio.h>

Complexo* criarComplexo(int x, int y) {
    Complexo *n = malloc(sizeof(Complexo));
    
    if(n != NULL) {
        n->x = x;
        n->y = y;
        return n;
    } else {
        printf("Número não alocado com êxito!");
        return NULL;
    }
}

void imprimirComplexo(Complexo *n) {
    if(n != NULL) {
        if(n->y >= 0) {
           printf("%d+%di", n->x, n->y);  
        } else {
            printf("%d%di", n->x, n->y);  
        }
    }
}

void destruirComplexo(Complexo *n) {
    if(n != NULL) {
        free(n);
        printf("\nNúmero complexo excluído!");
    } else {
        printf("O número complexo não existe ou foi escrito de forma errada!");
    }
}

Complexo* somaComplexo(Complexo *n1, Complexo *n2) {
    if(n1 != NULL && n2 != NULL) {
        Complexo *resultado = malloc(sizeof(Complexo));
        if(resultado != NULL) {
            resultado->x = n1->x + n2->x;
            resultado->y = n1->y + n2->y;
        }
        return resultado;
    } else {
        printf("O número complexo não existe!\n");
        return NULL;
    }
}

Complexo* subComplexo(Complexo *n1, Complexo *n2) {
    if(n1 != NULL && n2 != NULL) {
        Complexo *resultado = malloc(sizeof(Complexo));
        if(resultado != NULL) {
            resultado->x = n1->x - n2->x;
            resultado->y = n1->y - n2->y;
        }
        return resultado;
    } else {
        printf("O número complexo não existe!\n");
        return NULL;
    }
}
