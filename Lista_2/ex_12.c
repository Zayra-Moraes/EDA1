#include <stdio.h>

void swapmax3(int *a, int *b, int *c){
    int v[3]={*a,*b,*c};
    int maior=v[0];
    int menor=v[0];
    for(int i=0; i<3;i++){
        if(maior<v[i]){
            maior=v[i];
        }
    }
    *a=maior;
    for(int i=0; i<3; i++){
        if(menor>v[i]){
            menor=v[i];
        }
    }
    *c=menor;
    // for(int i=0; i<3;i++){
    //     if((v[i] != maior) && (v[i] != menor)){
    //         meio=v[i];
    //     }
    // } tava dando problema se tivesse nmrs repetidos no meio 
    int soma= v[0] +v[1] +v[2];
    int meio=soma-maior-menor;//conta para sempre conseguir o do meio, mesmo se tiver repetidos no meio
    *b=meio;
}

// int main(){
//     int a=4;
//     int b=6;
//     int c=2;
    
//     swapmax3(&a,&b, &c);
//     printf("a=%d || b= %d || c= %d \n", a,b,c);
//     return 0;

// }