#include <stdio.h>

void verificaString(char *str)
{
    if (*str == '\0')
        return;
    // caso base, algo pra parar a função

    if (*str == 120)
    {
        *str = 'y';
    }
    else if (*str == 'z')
    {
        *str = 'y';
    }

    verificaString(str + 1); // passando o proximo caracter
}

int main()
{
    char str[80];
    scanf("%s", str);
    verificaString(str);
    printf("%s",str);

    return 0;
}