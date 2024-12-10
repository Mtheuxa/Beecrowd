#include <stdio.h>

int main() {
    double salario, novo_salario, valor_reajuste;
    int percentual_reajuste;

    scanf("%lf", &salario);

    if (salario <= 400.00) {
        percentual_reajuste = 15;
    } else if (salario <= 800.00) {
        percentual_reajuste = 12;
    } else if (salario <= 1200.00) {
        percentual_reajuste = 10;
    } else if (salario <= 2000.00) {
        percentual_reajuste = 7;
    } else {
        percentual_reajuste = 4;
    }

    valor_reajuste = salario * percentual_reajuste / 100.0;
    novo_salario = salario + valor_reajuste;

    printf("Novo salario: %.2lf\n", novo_salario);
    printf("Reajuste ganho: %.2lf\n", valor_reajuste);
    printf("Em percentual: %d %%\n", percentual_reajuste);

    return 0;
}