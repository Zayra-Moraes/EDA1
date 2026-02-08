#include <stdio.h>

void tracos(int t)
{
    if (t == 0)
    {
        printf("\n");
        return;
    }
    printf("-");
    tracos(t - 1);
}

void Regua(int p)
{
    if (p == 0)
    {
        return;
    }
    Regua(p - 1);// desenha a regua de cima
    printf(".");// desenha linha central 
    tracos(p);
    Regua(p - 1);// regua de baixo 
}

int main()
{
    int i;
    scanf("%d", &i);
    Regua(i);
}