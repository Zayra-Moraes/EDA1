#include <stdio.h>

int main() {
    char nomeC[150], primeiro_nome[51];
    int k=0,l=0,i=0;
    scanf("%[^\n]", nomeC);//aqui ele pega com os espacos

    while(nomeC[k] != '\0'){
        if (nomeC[k]>= 'A' && nomeC[k] <= 'Z'){
            nomeC[k] = nomeC[k] + 32;
        }
        k++;

    }

    while(nomeC[i] != '\0'){
        i++;
    }

    int fim_nome=i;
    int j=fim_nome -1;

    while(j >= 0 && nomeC[j] != ' '){
        j--;
    }

    while(nomeC[l] != ' ' && nomeC[l] != '\0'){
        primeiro_nome[l]=nomeC[l];
        l++;
    }
    primeiro_nome[l]= '\0';

    printf("%s.%s@unb.br\n", primeiro_nome, &nomeC[j+1]);

    return 0;
}
