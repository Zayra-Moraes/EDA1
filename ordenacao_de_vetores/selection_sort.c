#include <stdio.h>
void selection_sort(int *v,int n){
    for(int i=0; i<n-1;i++){
        int min=i;//menor, onde estou
        for(int j=i+1;j<n;j++){//procura o menor em relacao ao min
            if(v[j]<v[min])
                min=j;//se for, atualiza o  valor
        }
        int aux= v[i];
        v[i]=v[min];
        v[min]=aux;
    }
}
int main(){
    int nmr[100],n=0;
    while((scanf("%d", &nmr[n]))==1){
        n++;
    }
    selection_sort(nmr, n);
    for(int i=0; i<n;i++){
        printf("V[%d] = %d\n",i,nmr[i]);
    }
    return 0;
}