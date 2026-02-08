#include <stdio.h>

int main()
{
    int linhas;
    scanf("%d", &linhas);
    int tamanhoMax = 0;

    for (int i = 0; i < linhas; i++)
    {
        char string [101];
        scanf("%s", string);

        int tamanho = 0;
        while (string[tamanho] != '\0')
        {
            tamanho++;
        }
        if (tamanho > tamanhoMax )
        {
            tamanhoMax = tamanho; 
        }
        
       
    }

    printf("%d", tamanhoMax);
    
    

    return 0;
}