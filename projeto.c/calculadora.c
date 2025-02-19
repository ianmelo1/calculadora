#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

Calculadora *criar() {
    Calculadora *c = (Calculadora *)malloc(sizeof(Calculadora));
    if (c) {
        c->valor1 = 0;
        c->valor2 = 0;
    }
    return c;
}

void destruir(Calculadora *c) {
    free(c);
}

void definir_valores(Calculadora *c, float v1, float v2) {
    if (c) {
        c->valor1 = v1;
        c->valor2 = v2;
    }
}

void exibir(Calculadora *c) {
    if (c) {
        printf("Valor 1: %.2f | Valor 2: %.2f\n", c->valor1, c->valor2);
    }
}

float somar(Calculadora *c) {
    return c ? c->valor1 + c->valor2 : 0;
}

float subtrair(Calculadora *c) {
    return c ? c->valor1 - c->valor2 : 0;
}

float multiplicar(Calculadora *c) {
    return c ? c->valor1 * c->valor2 : 0;
}

float dividir(Calculadora *c) {
    if (c && c->valor2 != 0) {
        return c->valor1 / c->valor2;
    } else {
        printf("Erro: Divisão por zero!\n");
        return 0;
    }
}
