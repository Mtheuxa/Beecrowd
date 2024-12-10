#include <stdio.h>

int main() {
    int hora_inicial, minuto_inicial, hora_final, minuto_final;
    int duracao_horas, duracao_minutos;

    scanf("%d %d %d %d", &hora_inicial, &minuto_inicial, &hora_final, &minuto_final);

    int inicio_em_minutos = hora_inicial * 60 + minuto_inicial;
    int fim_em_minutos = hora_final * 60 + minuto_final;

    if (fim_em_minutos > inicio_em_minutos) {
        duracao_horas = (fim_em_minutos - inicio_em_minutos) / 60;
        duracao_minutos = (fim_em_minutos - inicio_em_minutos) % 60;
    } 
    else {
        fim_em_minutos += 24 * 60;
        duracao_horas = (fim_em_minutos - inicio_em_minutos) / 60;
        duracao_minutos = (fim_em_minutos - inicio_em_minutos) % 60;
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", duracao_horas, duracao_minutos);

    return 0;
}