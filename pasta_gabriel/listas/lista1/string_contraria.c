#include <stdio.h>

int main()
{
    int i = 0;
    char string[101];
    scanf(" %[^\n]", string);
    while (string[i] != '\0')// conta tamanho da string
    {
        i++;

    }
    i--;
    while (i >= 0)
    {
        printf("%c - %d\n", string[i], string[i]);
        i--;
    }
    

    return 0;
}