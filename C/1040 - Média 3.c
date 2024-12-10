#include <stdio.h>

int main() {
    double N1, N2, N3, N4;
    double media, notaExame, mediaFinal;

    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);

    media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10.0;

    printf("Media: %.1lf\n", media);

    if (media >= 7.0) {
        printf("Aluno aprovado.\n");
    }
    else if (media < 5.0) {
        printf("Aluno reprovado.\n");
    } 
    else {
        printf("Aluno em exame.\n");
    
        scanf("%lf", &notaExame);
        printf("Nota do exame: %.1lf\n", notaExame);

        mediaFinal = (media + notaExame) / 2.0;

        printf("Aluno %s.\n", mediaFinal >= 5.0 ? "aprovado" : "reprovado");
        printf("Media final: %.1lf\n", mediaFinal);
    }

    return 0;
}