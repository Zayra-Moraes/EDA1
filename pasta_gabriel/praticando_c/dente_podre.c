#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

/**
 * Auto-generated code below aims at helping you parse
 * the standard input according to the problem statement.
 **/

int main()
{
    int N; /* numero de fileiras */
    scanf("%d", &N);

    fgetc(stdin); // consome a quebra de linha \n

    for (int i = 0; i < N; i++)
    { /* avalia por fileira */
        char ROW[33] = "";
        scanf("%[^\n]", ROW);
        fgetc(stdin); // consumindo quebra de linha
        
        //se tiver podre
        if (strchr(ROW, '0') != NULL) // essa expressão busca um caracter numa string
        {
            for (int j = 0; j < strlen(ROW); j++) // percorre a string pelo o seu tamanho
            {
                printf("-");
            }

            printf("\n");
        }
        else //se tiver bom 
        {
            printf("%s\n", ROW);
        }
    }

    return 0;
}