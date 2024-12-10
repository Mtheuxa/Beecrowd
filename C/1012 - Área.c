#include <stdio.h>

int main() {
    double A, B, C, pi = 3.14159;
    double area_triangulo, area_circulo, area_trapezio, area_quadrado, area_retangulo;

    scanf("%lf %lf %lf", &A, &B, &C);

    area_triangulo = (A * C) / 2.0;

    area_circulo = pi * C * C;

    area_trapezio = (A + B) * C / 2.0;

    area_quadrado = B * B;

    area_retangulo = A * B;

    printf("TRIANGULO: %.3f\n", area_triangulo);
    printf("CIRCULO: %.3f\n", area_circulo);
    printf("TRAPEZIO: %.3f\n", area_trapezio);
    printf("QUADRADO: %.3f\n", area_quadrado);
    printf("RETANGULO: %.3f\n", area_retangulo);

    return 0;
}