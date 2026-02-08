#include <stdio.h>

int faz_conta_direito(int parcelas, char op)
{
    
    int parcela_primeiro;
    scanf("%d", &parcela_primeiro);
    if (op == '-')
    {

        for (int i = 0; i < parcelas - 1; i++)
        {
            int Vparcelas;
            scanf("%d", &Vparcelas);

            parcela_primeiro = parcela_primeiro - Vparcelas;
        }
        return parcela_primeiro;
    }

    if (op == '+')
    {

        for (int i = 0; i < parcelas - 1; i++)
        {
            int Vparcelas;
            scanf("%d", &Vparcelas);
            parcela_primeiro = parcela_primeiro + Vparcelas;
        }
        return parcela_primeiro;
    }
    return parcela_primeiro;
}

/* int main()
{
    int n = faz_conta_direito(4, '-');
    printf("%d", n);
} */