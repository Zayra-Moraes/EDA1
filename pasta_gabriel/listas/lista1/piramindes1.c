#include <stdio.h>

int main()
{

    int n;
    scanf("%d",&n);

    for (int i = 1; i <= n; i++) // responsavel pela pulação de linhas
    {

        for (int j = 1; j <= i; j++) // responsavel pela a printação do numero
        {
            printf(" %.2d", i);
        }

        printf("\n"); // so pula a linha
    }
    printf("\n"); // linha entre as piramides


    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)

        {
            printf("%.2d ",j);
        }
        printf("\n");
        
    }
    

    return 0;
}