#include <stdio.h>

void conta_vogal(char *p, int vogal){
    if(*p == '\0'){
        printf("%d\n", vogal);
        return;
    }
    if(*p == 'A' || *p == 'E' ||*p == 'I' ||*p == 'O' ||*p == 'U'){
        vogal++;
    }
    conta_vogal(p+1,vogal);
}

int main(){
    char entrada[101];
    scanf("%s", entrada);
    conta_vogal(entrada, 0);//se usasse ponteiro n ia precisar do int
    return 0;
}