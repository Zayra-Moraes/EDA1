#include <stdio.h>
//melhorias: poderia ser uma funcao void e tirar os returns
int recursao_x_y(char str[81], int i){//poderia fazer usando ponteiro
    if(str[i] == '\0'){
        printf("%s\n",str);//o certo seria imprimir na main, poderia só dar um return e dar o print na main
    }
    else{
        if(str[i] == 'x'){
            str[i]= 'y';
        }
        i++;
        recursao_x_y(str,i);
        
    }
    return 0;
}

int main(){
    char entrada[81];
    scanf("%s", entrada);
    recursao_x_y(entrada, 0);//se usasse ponteiro n ia precisar do int
    return 0;
}

// #include <stdio.h>

// void troca_x_y(char *p) {
//     if (*p == '\0') {
//         return; // fim da string
//     }

//     if (*p == 'x') {
//         *p = 'y';
//     }

//     troca_x_y(p + 1); // vai para o próximo caractere
// }

// int main() {
//     char entrada[81];
//     scanf("%s", entrada);

//     troca_x_y(entrada);

//     printf("%s\n", entrada);
//     return 0;
// }