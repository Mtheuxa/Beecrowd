#include <stdio.h>

int main() {
    double A, B, C, MEDIA;
    int pesoA = 2, pesoB = 3, pesoC = 5;
    int totalPesos = pesoA + pesoB + pesoC;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);
    MEDIA = (A * pesoA + B * pesoB + C * pesoC) / (double)totalPesos;
    printf("MEDIA = %.1lf\n", MEDIA);

    return 0;
}