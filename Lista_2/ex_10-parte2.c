#include <stdio.h>

/* Verifica se o ano é bissexto */
void verificaBissexto(int *ano, int *bissexto) {
    if ((*ano % 400 == 0) || (*ano % 4 == 0 && *ano % 100 != 0))
        *bissexto = 1;
    else
        *bissexto = 0;
}

/* Valida as entradas */
void validaEntrada(int *diaAno, int *bissexto, int *valido) {
    int maxDias;

    if (*bissexto)
        maxDias = 366;
    else
        maxDias = 365;

    if (*diaAno < 1 || *diaAno > maxDias)
        *valido = 0;
    else
        *valido = 1;
}

/* Calcula dia e mês */
void calculaDiaMes(int *diaAno, int *bissexto, int *dia, int *mes) {
    int diasMes[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
    int i;

    if (*bissexto)
        diasMes[1] = 29;

    i = 0;
    while (*diaAno > diasMes[i]) {
        *diaAno -= diasMes[i];
        i++;
    }

    *dia = *diaAno;
    *mes = i + 1;
}

int main() {
    int d, a;
    int bissexto;
    int valido;
    int dia, mes;

    scanf("%d %d", &d, &a);

    verificaBissexto(&a, &bissexto);
    validaEntrada(&d, &bissexto, &valido);

    if (!valido) {
        printf("Entradas invalidas!\n");
    } else {
        calculaDiaMes(&d, &bissexto, &dia, &mes);
        printf("%02d/%02d/%04d\n", dia, mes, a);
    }

    return 0;
}
