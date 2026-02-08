#include <stdio.h>
#include <string.h>

//fila simples

typedef struct pessoa{
    char nome[100];
    int cpf;
}pessoa;

void aloca_fila(pessoa fila[], int *N){

}

void cria_fila(pessoa fila[], int Tamanho, int *p, int *u){
    *p=0;
    *u=0;

}
int fila_vazia(int p, int u){
    return (p==u);
}

int fila_cheia(int u, int N){
    return (u==N);
}

int coloca_na_fila(pessoa fila[], int *N, int *u, pessoa pessoa){
    if(fila_cheia(*u,*N)) return 0;
    fila[*u]= pessoa;
    (*u)++;
    return 1;

}

int remover_da_fila(pessoa fila[], int *p, int u, pessoa *x){
    if(fila_vazia(*p,u)) return 0;
    *x=fila[*p];
    (*p)++;
    return 1;
}

int main(){
    int p,u;
    int n=5;
    pessoa x;
    pessoa fila[n];
    pessoa zayra;
    strcpy(zayra.nome,"Zayra");
    zayra.cpf=1234456789;
    pessoa laysa;
    strcpy(laysa.nome, "Laysa");
    laysa.cpf=23232323;



    cria_fila(fila, n, &p, &u);

    coloca_na_fila(fila, &n,&u , zayra);
    coloca_na_fila(fila,&n , &u, laysa);

    for(int i=p;i<u;i++){
        printf("%s | %d\n",fila[i].nome,fila[i].cpf);
    }

    remover_da_fila(fila,&p,u, &x);

    for(int i=p;i<u;i++){
        printf("%s | %d\n",fila[i].nome,fila[i].cpf);
    }

    return 0;
}