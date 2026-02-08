#include <stdio.h>
/*imprimir na saída o nome da banda e o ano que a musica foi lançada */

typedef struct tipoBanda
{
    char nome[80]; // nome de uma banda
    int ano;       // ano que a banda apresentou
} _tipoBanda;

typedef struct tipoShow
{
    char nome[80];          // nome do evento
    int qtd;                // quantidade de bandas no show
    _tipoBanda bandas[100]; // bandas que se apresentaram

} _tipoShow;
/* 
_tipoShow criar_show(char nome[], int qtd, _tipoBanda bandas[])
{
    int i;
    _tipoShow s1;
    for (i = 0; i < 80 && nome[i] != '\0'; i++) // copia a string pra outra
    {
        s1.nome[i] = nome[i];
    }
    s1.nome[i] = '\0'; // fecha a string
    s1.qtd = qtd;
    for (i = 0; i < qtd; i++)
    {
        s1.bandas[i] = bandas[i];
    }

    return s1;
}

_tipoBanda criar_banda(char nome[], int ano)
{
    _tipoBanda b1;
    int i;
    for (i = 0; i < 80 && nome[i] != '\0'; i++)
    {
        b1.nome[i] = nome[i];
    }
    b1.nome[i] = '\0';

    b1.ano = ano;
    return b1;
}
*/
int eh_igual(char nome1[], char nome2[])
{
    int i = 0;
    while (nome1[i] == nome2[i] && i < 80)
    {
        if (nome1[i] == '\0')
        {
            return 1;
        }
        i++;
    }

    return 0;
} 

void pesquisarNomeBanda(char pesquisa[], _tipoShow *shows, int n)
{ // tenho que verificar o nome de cada banda, banda esta em bandas que esta em show que esta em shows
    int i = 0, validante = 0;
    for (i = 0; i < n; i++) // entrando em show
    {
        for (int k = 0; k < shows[i].qtd; k++) // entrando em cada banda
        {
            if (eh_igual(shows[i].bandas[k].nome, pesquisa))
            {
                printf("%s : ano %d\n", shows[i].nome, shows[i].bandas[k].ano);
                validante = 1;
                
            }
        }
    }
    if (!validante)
    {
        printf("Banda nao cadastrada");
    }
}
/* int main()
{
    _tipoBanda b1 = criar_banda("lady gaga", 2017);
    _tipoBanda b2 = criar_banda("katy perry", 2015);
    _tipoBanda b3 = criar_banda("britney", 2001);
    _tipoBanda b4 = criar_banda("gorilazz", 2010);
    _tipoBanda b5 = criar_banda("byeonce", 2018);
    _tipoBanda lista_bandas[3] = {b1, b2, b3};
    _tipoBanda lista_bandas2[3] = {b4, b5};

    _tipoShow s1 = criar_show("super ball", 3, lista_bandas);
    _tipoShow s2 = criar_show("cachoella", 2, lista_bandas2);

    _tipoShow shows[2] = {s1, s2};
    pesquisarNomeBanda("artic monkeys", shows, 2);

    return 0;
} */