#include <stdio.h>

int conta_vogal(char *nome)
{
    if (*nome == '\0') return 0;
    if(*nome == 'A' ||*nome == 'E' ||*nome == 'I' ||*nome == 'O' ||*nome == 'U' ){
        return 1 + conta_vogal(nome+1);
    }
    return 0 + conta_vogal(nome+1);
    
}

int main()
{
    char nome[101];
    scanf("%s", nome);
    int resultado=conta_vogal(nome);
    printf("%d",resultado);

}