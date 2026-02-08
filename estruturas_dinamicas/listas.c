#include <stdio.h>
#include <stdlib.h>

typedef struct Cliente{
    char nome[100];
    int cpf;
    int idade;
    struct Cliente *prox;
}Cliente;

Cliente *Cria_le(){
    Cliente *le;
    le=malloc(sizeof(Cliente));
    le->prox=NULL;

    return le;
}

int main(){
    

}