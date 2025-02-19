#include <stdio.h>
#include "calculadora.h"

int main() {
    Calculadora *calc = criar();
    int opcao;
    float v1, v2;

    do {
        printf("\n--- Calculadora ---\n");
        printf("1. Definir valores\n");
        printf("2. Somar\n3. Subtrair\n4. Multiplicar\n5. Dividir\n6. Exibir valores\n0. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            printf("Digite o primeiro valor: ");
            scanf("%f", &v1);
            printf("Digite o segundo valor: ");
            scanf("%f", &v2);
            definir_valores(calc, v1, v2);
        }

        switch (opcao) {
            case 2: printf("Resultado: %.2f\n", somar(calc)); break;
            case 3: printf("Resultado: %.2f\n", subtrair(calc)); break;
            case 4: printf("Resultado: %.2f\n", multiplicar(calc)); break;
            case 5: printf("Resultado: %.2f\n", dividir(calc)); break;
            case 6: exibir(calc); break;
            case 0: destruir(calc); break;
            default: printf("Opção inválida!\n");
        }

    } while (opcao != 0);

    return 0;
}
