#include <stdio.h>

void conta_7(char *p, int nmr){
    if(*p == '\0'){
        printf("%d\n", nmr);
        return;
    }
    if(*p == '7'){
        nmr++;
    }
    conta_7(p+1,nmr);
}

int main(){
    // int entrada;
    // scanf("%d", &entrada);
    char s[20];
    // sprintf(s, "%d",entrada);
    scanf("%s",s);
    conta_7(s, 0);//se usasse ponteiro n ia precisar do int
    return 0;
}