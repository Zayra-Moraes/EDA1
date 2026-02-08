#include <stdio.h>
#include <stdlib.h>

// data na forma anoMesDia

typedef struct tipoData
{
    int dia;
    int mes;
    int ano;
} Data;

typedef struct tipoPessoa
{
    char nome[80];
    Data dtNascimento; //[x,x,x,x,x,x,x,x,x,x]
} Pessoa;

Pessoa separaInfo(char *nome, int dt_nascimento)
{ // primeiro tratar o nome | segundo tratar a data de nascimento | terceiro colocar ela em struct tipo data
    int ano, dia, mes;
    Data d1;
    Pessoa p1;
    ano = dt_nascimento / 10000;
    mes = (dt_nascimento / 100) % 100;
    dia = dt_nascimento % 100;
    d1.ano = ano;
    d1.mes = mes;
    d1.dia = dia;

    p1.dtNascimento = d1;
    int i = 0;
    while (nome[i] != '\0' && i < 79)
    {
        p1.nome[i] = nome[i];
        i++;
    }
    
    p1.nome[i] = '\0';
    return p1;
};

/* int main()
{
    Pessoa px = separaInfo("Fernando", 20050715);
    printf("%d/%d/%d\n",px.dtNascimento.dia,px.dtNascimento.mes,px.dtNascimento.ano);
    printf("%s\n",px.nome);
    return 0;
} */