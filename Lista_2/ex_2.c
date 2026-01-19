#include <stdio.h>

void Pares_caracteres(char *p, int i){
    if(*p == '\0'){
        printf("%d\n",i);
        return;
    }
    if(*p == *(p+2)){
        i++;
    }
    Pares_caracteres(p+1,i);
}

int main(){
    char entrada[200];
    scanf("%s", entrada);
    Pares_caracteres(entrada, 0);
    return 0;

}

