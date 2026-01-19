#include<stdio.h>

void ao_contrario(char *p){
    if(*p == '\0'){
        return;
    }
    ao_contrario(p+1);
    printf("%c",*p);//nao pode ser printf("%s", p), pq o %s imprime a string inteira
    // %s imprime do ponteiro até o '\0'
    // %c imprime apenas o conteúdo daquele endereço


}

int main(){
    char entrada[501];
    scanf("%s", entrada);
    ao_contrario(entrada);
    printf("\n");
    return 0;
}