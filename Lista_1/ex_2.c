#include <stdio.h>

int main(){
    int n;
    int x=1;
    scanf("%d", &n);
    while (x<=n){
        for(int i=0;i<x;i++){
            printf("%02d", x);
            printf(" ");
        }
        printf("\n");
        x++;
    }
    x=1;
    printf("\n");
    while(x<=n){
        for (int i=1; i<=x; i++){
            printf("%02d", i);
            printf(" ");
        }
        printf("\n");
        x++;
    }

    return 0;
}
//Em C, n tem como imprimir uma string por um numero, ent tem q fazer um for
//usei o while para repetir as linhas ent no final de cada linha tem um \n