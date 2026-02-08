#include <stdio.h>

int main()
{
    int contador=0;
    int entrada;
    while (scanf("%d", &entrada) != EOF)
    {
        contador++;
    }

    printf("%d", contador);
    
    
    return 0;
}