#include <stdio.h>

void insertionSort(int *V, int N){// vetor e tamanho do vertor
    for(int j=1; j<N;++j){
        int x=V[j];
        int i;

        for(i=j-1;i>=0 && V[i]> x;--i){
            V[i+1]=V[i];
        }
        V[i+1]=x;
    }
    
//     int i,j,aux;
//     for(i=1;i<N; i++){//pos 1 ate a N-1
//         aux=V[i];
//         for(j=1; (j>0) && (aux<V[j-1]);j--){//pegando uma posicao e comparando com as outras
//             V[j]=V[j-1];
//         }
//         V[j]=aux;//move as cartas maiores para frente
//     }
}

int main(){
    int nmr[100]={},n=0;
    while((scanf("%d", &nmr[n]))==1){
        n++;
    }
    insertionSort(nmr, n );
    for(int i=0; i<n; i++){
        printf("V[%d]=%d\n ",i, nmr[i]);
    }
}