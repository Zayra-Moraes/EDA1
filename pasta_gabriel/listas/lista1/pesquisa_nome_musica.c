#include <stdio.h>
#include <string.h>

typedef struct tipoMusica{
    char nome[80];
    int ano;
}tipoMusica;


typedef struct tipoBanda{
    char nome[80];
    int qtd;
    tipoMusica musicas[100];
} tipoBanda;

void pesquisarNomeMusica(char pesquisa[80], tipoBanda Bandas[50], int n){
    int achou=0;
    for(int i=0; i<n; i++){
        for(int j=0;j<Bandas[i].qtd;j++){
            if(strcmp(pesquisa,Bandas[i].musicas[j].nome) == 0){
                printf("%s : ano %d\n", Bandas[i].nome, Bandas[i].musicas[j].ano);
                achou=1;
            }
        }
        
    }
    if(achou==0){
        printf("Musica nao cadastrada\n");
    }

}