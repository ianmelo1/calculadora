#ifndef CALCULADORA_H
#define CALCULADORA_H

typedef struct {
    float valor1;
    float valor2;
} Calculadora;

Calculadora *criar();
void destruir(Calculadora *c);
void definir_valores(Calculadora *c, float v1, float v2);
void exibir(Calculadora *c);
float somar(Calculadora *c);
float subtrair(Calculadora *c);
float multiplicar(Calculadora *c);
float dividir(Calculadora *c);

#endif
