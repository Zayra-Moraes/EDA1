#include <stdio.h>
int conta_string(char *str)
{
    if (str[0] == '\0')
    {
        return 0;
    }
    return 1 + conta_string(&str[1]);
}
void inverteString(char *str, int tamanho)
{
    if (tamanho <= 1)
    {
        return;
    }

    char temp = str[0];
    str[0] = str[tamanho - 1]; // descontar o \0
    str[tamanho - 1] = temp;

    inverteString(str + 1, tamanho - 2);
}

int main()
{
    char entrada[500];
    scanf("%s", entrada);
    int tamanho = conta_string(entrada);
    inverteString(entrada,tamanho);
    printf("%s",entrada);
    return 0;
}