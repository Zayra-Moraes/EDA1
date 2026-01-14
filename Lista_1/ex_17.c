#include <stdio.h>

int validaPeso(double pesoKg){
    if(pesoKg<0){
        return 0;
    }
    return 1;
}

void fazTonelada(double pesokg){
    double pesoTonelada= pesokg /1000;
    printf("%.4f\n", pesoTonelada);
}

void fazGrama(double pesoKg){
    double pesoGrama=pesoKg *1000;
    printf("%.4f\n", pesoGrama);
}

// int main(){
//     fazTonelada(5);
//     // printf("%d", resutado);
//     return 0;

// }