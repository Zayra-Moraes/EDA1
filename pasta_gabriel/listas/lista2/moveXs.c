#include <stdio.h>


/* void moveXs(char *str, int tam)
{
    // xxmode -> modexx

    if (tam <= 1)
    {
        return;
    }

    if (str[0] == 'x')
    {
        char temporario = str[0]; // vai jogando o x pra frentre
        str[0] = str[1];
        str[1] = temporario;
        moveXs(&str[1], tam - 1); // agora ele ta na um e nao na 0, e temque terminar de empurrar ele

        if (str[0] == 'x') // checando se eu n troquei x por x, se sim fazer o movimento denovo
        {
            moveXs(str, tam - 1);
        }
    }
    else
    {
        // Se o primeiro NÃO é 'x', apenas movemos os 'x' do restante da string
        moveXs(&str[1], tam - 1);
    }
} */

void move_x(char *p){
    if(*p == '\0'|| *p == '\n'){
        return;
    }
    if(*p == 'x'){
        move_x(p+1);
        printf("x");// printa na volta 
    }
    else{
        //char palavra=*p;
        printf("%c",*p);// printa na ida
        move_x(p+1);
        
    }
    // desse modo quando terminar de ir todos os caracterres ja estao printados e sobrara apenas os x pra printar 
}

int main()
{
    char str[101];
    fgets( str,101,stdin);
    move_x(str);
    //printf("%s", str);

    return 0;
}