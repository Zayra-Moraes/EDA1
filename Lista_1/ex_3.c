#include <stdio.h>
int main(){
    int n;
    int a=1;
    int _a=1;
    int e;
    scanf("%d", &n);
    a=a+(2*(n-1));
    e=((a-1)/2);
    while(_a<=a){
        for(int i=0;i<e;i++){
            printf(" ");
        }
        e--;
        for(int i=0;i<_a;i++){
            printf("*");
        }
        _a=_a+2;
        printf("\n");
    }
    return 0;
}

/* 
acho q dava pra ter feito de um jeito mais facil, mas aq eu primeiro descobri o tamanho de
asteriscos do ultimo e calculei os espacos, aí fiz um asterisco 2 para ir somando a cada linha
  o while só para quando ele chega ao nmr de asteriscos que eu achei primeiro 
  */