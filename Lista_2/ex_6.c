#include <stdio.h>

int pa_recursiva (int *v, int primeiro, int ultimo){
    if(ultimo-primeiro ==1) return 1;

    int soma_atual=v[primeiro]+v[ultimo];
    int proxima_soma=v[primeiro+1]+v[ultimo-1];
    if(soma_atual != proxima_soma) return 0;

    pa_recursiva(v, primeiro+1, ultimo-1);
}

// int main(){
//     int v[6]={2,5,8,11,14,17};
//     int resultado=pa_recursiva(v,0,5);
//     if(resultado == 1){
//         printf("eh uma pa!\n");
//     }
//     else{
//         printf("NAO eh uma pa!\n");
//     }
//     return 0;

// }