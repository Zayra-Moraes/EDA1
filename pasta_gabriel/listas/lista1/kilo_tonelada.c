// retorna 0 de for invalido e 1 se for valido

#include <stdio.h>

void fazTonelada(double pesoKg)
{
    double valorTonelada;
    valorTonelada = pesoKg / 1000;
    printf("%.4f\n", valorTonelada);
}

void fazGrama(double pesoKg)
{
    double valorgrama;
    valorgrama = pesoKg * 1000;
    printf("%.4f\n", valorgrama);
}

int validaPeso(double pesoKg)
{

    if (pesoKg > 0)
    {
        return 1;
    }
    else return 0;
}

/* int main()
{   
    
    
    validaPeso(10.5);
    return 0;
} */