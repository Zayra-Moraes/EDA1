#include <stdio.h>

void move_x(char *p){
    if(*p == '\0'|| *p == '\n'){
        return;
    }
    if(*p == 'x'){
        move_x(p+1);
        printf("x");
    }
    else{
        //char palavra=*p;
        printf("%c",*p);
        move_x(p+1);
        
    }
}


int main(){
    char entrada[101];
    // sprintf(s, "%d",entrada);
    // scanf("%s",entrada);
    fgets(entrada,101,stdin);
    move_x(entrada);//se usasse ponteiro n ia precisar do int
    printf("\n");
    return 0;
}