#include <stdio.h>
int verifica7s(long long entrada, int alvo)
{
    if (entrada == 0)
    {
        return 0;
    }

    if (entrada % 10 == alvo)
    {
        return 1 + verifica7s(entrada / 10, alvo);
    }
    else
    {
        return 0 + verifica7s(entrada / 10, 7);
    }
}

int main()
{
    long long entrada;
    scanf("%lld", &entrada);
    printf("%d",verifica7s(entrada, 7));
    return 0;
}