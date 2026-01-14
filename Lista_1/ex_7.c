#include <stdio.h>

int main(){
    char str[1500];
    int i=0 ,tamanho=0;
    fgets(str,1500,stdin);
    while(str[i] == ' '){
        i++;
    }
    while(str[i] != ' ' && str[i] != '\n' && str[i] != '\0'){
        i++;
        tamanho++;
    }
    printf("%d\n",tamanho);
    return 0;
}