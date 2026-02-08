#include <stdio.h>

int main()
{
    char nomeC[101];
    char primeiro_nome[51];
    int k = 0;
    int l = 0;
    int i = 0;
    scanf(" %[^\n]", nomeC);
    // capturando correto;

    while (nomeC[k] != '\0')
    {
        if (nomeC[k] >= 'A' && nomeC[k] <= 'Z') // se estiver entre os maiusculos
        {
            nomeC[k] = nomeC[k] + 32; // associo o valor minusculo respectivo
        }
        k++;
    }

    while (nomeC[i] != '\0') // vai me retornar o indice do '\0'
    {
        i++;
    }

    int fim_nome = i;
    int j = fim_nome - 1;

    while (j >= 0 && nomeC[j] != ' ') // enquanto o indice nao for zero e o carcatere nao for ' '...
    {
        j--;
    }
    /* ultimo nome = &nomeC[j+1];*/

    while (nomeC[l] != ' ' && nomeC[l] != '\0')
    {
        primeiro_nome[l] = nomeC[l];
        l++;
    }
    primeiro_nome[l] = '\0';
    

    printf("%s.%s@unb.br", primeiro_nome, &nomeC[j+1]);
    
}