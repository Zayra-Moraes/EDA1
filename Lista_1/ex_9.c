#include <stdio.h>

int main(){
    int N=0, i=0,tamanho=0,maior=0;
    char str[150];
    scanf("%d", &N);
    while(i<=N){
        fgets(str,150,stdin);
        while(str[tamanho] != '\n' && str[tamanho] != '\0'){
            tamanho++;
        }
        if(maior<tamanho){
            maior=tamanho;
        }
        tamanho=0;
        i++;
    }
    printf("%d\n",maior);
    return 0;
}