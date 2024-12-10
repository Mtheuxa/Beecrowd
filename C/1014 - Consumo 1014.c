#include <stdio.h>

int main() {
    int distancia;
    float combustivel, consumo_medio;

    scanf("%d", &distancia);
    scanf("%f", &combustivel);

    consumo_medio = distancia / combustivel;

    printf("%.3f km/l\n", consumo_medio);

    return 0;
}
