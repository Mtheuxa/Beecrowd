#include <stdio.h>

int main() {
    int numero_funcionario, horas_trabalhadas;
    double valor_por_hora, salario;

    scanf("%d", &numero_funcionario);
    scanf("%d", &horas_trabalhadas);
    scanf("%lf", &valor_por_hora);

    salario = horas_trabalhadas * valor_por_hora;

    printf("NUMBER = %d\n", numero_funcionario);
    printf("SALARY = U$ %.2lf\n", salario);

    return 0;
}