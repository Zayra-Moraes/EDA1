#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) // pras linhas 
    {
        for (int espacos = 0; espacos < n-i; espacos++) //a media que a linha aumenta o espaço diminui por isso o n-i
        {
            printf(" ");
        }
        for (int pontos = 0; pontos < 2 * i - 1; pontos++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}