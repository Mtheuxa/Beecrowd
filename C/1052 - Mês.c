#include <stdio.h>

int main() {
    int mes;
    const char* meses[12] = {
        "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };

    scanf("%d", &mes);

    if (mes < 1 || mes > 12) {
        printf("Valor inválido! Por favor, digite um valor entre 1 e 12.\n");
    } 
    else {
        printf("%s\n", meses[mes - 1]);
    }

    return 0;
}