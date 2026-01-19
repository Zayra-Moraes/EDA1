#include <stdio.h>
#include <string.h>

typedef struct tipoBanda{
    char nome[80];
    int ano;
}tipoBanda;


typedef struct tipoShow{
    char nome[80];
    int qtd;
    tipoBanda bandas[100];
} tipoShow;

void pesquisarNomeBanda(char pesquisa[80], tipoShow shows[50], int n){
    int achou=0;
    for(int i=0; i<n; i++){
        for(int j=0;j<shows[i].qtd;j++){
            if(strcmp(pesquisa,shows[i].bandas[j].nome) == 0){
                printf("%s : ano %d\n", shows[i].nome, shows[i].bandas[j].ano);
                achou=1;
            }
        }
        
    }
    if(achou==0){
        printf("Banda nao cadastrada\n");
    }

}