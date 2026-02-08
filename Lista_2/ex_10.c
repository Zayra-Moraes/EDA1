#include <stdio.h>

// PODE USAR LAÇOS
int verificaBissexto(int *ano)
{
    if (*ano % 400 == 0)
        return 1;
    if ((*ano % 4 == 0) && (*ano % 100 != 0))
        return 1;
    return 0;
}

void calculaDiaMes(int *dias, int *ano, int *mes)
{
    int resultado = verificaBissexto(ano);

    if (resultado == 1) { // bissexto
        if (*dias >= 1 && *dias <= 31) {
            *mes = 1;
        }
        else if (*dias <= 60) {
            *dias -= 31;
            *mes = 2;
        }
        else if (*dias <= 91) {
            *dias -= 60;
            *mes = 3;
        }
        else if (*dias <= 121) {
            *dias -= 91;
            *mes = 4;
        }
        else if (*dias <= 152) {
            *dias -= 121;
            *mes = 5;
        }
        else if (*dias <= 182) {
            *dias -= 152;
            *mes = 6;
        }
        else if (*dias <= 213) {
            *dias -= 182;
            *mes = 7;
        }
        else if (*dias <= 244) {
            *dias -= 213;
            *mes = 8;
        }
        else if (*dias <= 274) {
            *dias -= 244;
            *mes = 9;
        }
        else if (*dias <= 305) {
            *dias -= 274;
            *mes = 10;
        }
        else if (*dias <= 335) {
            *dias -= 305;
            *mes = 11;
        }
        else if (*dias <= 366) {
            *dias -= 335;
            *mes = 12;
        }
    }
    else { // não bissexto
        if (*dias >= 1 && *dias <= 31) {
            *mes = 1;
        }
        else if (*dias <= 59) {
            *dias -= 31;
            *mes = 2;
        }
        else if (*dias <= 90) {
            *dias -= 59;
            *mes = 3;
        }
        else if (*dias <= 120) {
            *dias -= 90;
            *mes = 4;
        }
        else if (*dias <= 151) {
            *dias -= 120;
            *mes = 5;
        }
        else if (*dias <= 181) {
            *dias -= 151;
            *mes = 6;
        }
        else if (*dias <= 212) {
            *dias -= 181;
            *mes = 7;
        }
        else if (*dias <= 243) {
            *dias -= 212;
            *mes = 8;
        }
        else if (*dias <= 273) {
            *dias -= 243;
            *mes = 9;
        }
        else if (*dias <= 304) {
            *dias -= 273;
            *mes = 10;
        }
        else if (*dias <= 334) {
            *dias -= 304;
            *mes = 11;
        }
        else if (*dias <= 365) {
            *dias -= 334;
            *mes = 12;
        }
    }
}

int main()
{
    int dias, ano;
    int mes = 0;

    scanf("%d %d", &dias, &ano);

    calculaDiaMes(&dias, &ano, &mes);

    if (mes != 0)
        printf("%02d/%02d/%d\n", dias, mes, ano);
    else
        printf("Entradas invalidas!");

    return 0;
}
