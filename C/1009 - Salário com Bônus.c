#include <stdio.h>

int main() {
    char nome_vendedor[50];
    double salario_fixo, total_vendas, salario_final;

    scanf("%s", nome_vendedor);
    scanf("%lf", &salario_fixo);
    scanf("%lf", &total_vendas);

    salario_final = salario_fixo + (total_vendas * 0.15);

    printf("TOTAL = R$ %.2lf\n", salario_final);

    return 0;
}