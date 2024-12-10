#include <stdio.h>

int main() {
    int tempo_viagem, velocidade_media;
    double distancia, litros_necessarios;

    scanf("%d %d", &tempo_viagem, &velocidade_media);

    distancia = tempo_viagem * velocidade_media;

    litros_necessarios = distancia / 12.0;

    printf("%.3f\n", litros_necessarios);

    return 0;
}