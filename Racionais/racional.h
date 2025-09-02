#ifndef RACIONAL_H
#define RACIONAL_H

//É criado um struct para receber os valores de ambos os enumeradores e ambos denominadores
typedef struct {
    int num;
    int den;
} Racional;

//Função usada para criar os numeros racionais em forma de struct
Racional criarNumRacional(int num, int den);

//Realiza o MDC para saber o maior fator comum entre o numerador e o denominador
int MDC(int a, int b);

//Simplifica pegando os numeradores e denominadores de cada calculo
Racional simplificarFracoes(int num, int den);

//Soma os numeros racionais
Racional somaRacionais(Racional r1, Racional r2);

//Multiplica os numeros racionais
Racional multiplicaRacionais(Racional r1, Racional r2);

//Imprime os numeros racionais
void imprimeRacional(Racional r);

//Faz a simplificação primeiro dos numeros racionais, e então faz a comparação entre ambos
void testaIgual(Racional r1, Racional r2);

#endif