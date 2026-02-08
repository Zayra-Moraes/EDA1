#include <stdio.h>

int main()
{
    int fileiras, lugares_fila, lugar_ocupado;
    int cinema[30][30]={0};
    char fileira_ocupada;
    scanf("%d %d", &fileiras, &lugares_fila);
    getchar();//n entendi essa parte 
    while (scanf(" %c%d", &fileira_ocupada, &lugar_ocupado) != EOF)
    {
        //printf(" ");
        cinema['A' + fileiras - fileira_ocupada][lugar_ocupado ]=1;
        getchar();
        
    }
    for (int i = 0; i <= fileiras; i++)
    {
        if (i == 0)
        {
            printf("  ");
            for (int k = 1 ;k <= lugares_fila; k++)
            {
                printf("%02d ", k);
            }
        }
        else
        {
            printf("%c ", 'A' + fileiras - i);
            for (int j = 1; j <= lugares_fila; j++)
            {
                printf("%s", cinema[i][j] ? "XX " : "-- ");
            }
        }
        printf("\n");
    }

    return 0;
}