#include <stdio.h>

int main(){
    int final=0,i=0;
    char saida[150];
    fgets(saida,150,stdin);
    while(saida[i] != '\n' && saida[i] != '\0'){
        i++;
        final++;
    }
    //%c imprime o simbolo enquanto %d imprime o codigo em ASCII
    i--;
    while(i>=0){
        printf("%c - %d\n",saida[i],saida[i]);
        i--;
    }

    return 0;
}