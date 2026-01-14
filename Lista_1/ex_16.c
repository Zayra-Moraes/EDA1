#include <stdio.h>

int faz_conta_direito(int parcelas, char op){
    int nmrs;
    int conta=0;
    if (op == '-'){
        scanf("%d", &conta);
        for(int i=0;i<(parcelas-1);i++){
            scanf("%d", &nmrs);
            conta=conta-nmrs;
        }
    }
    else if(op =='+'){
        for(int i=0;i<parcelas;i++){
            scanf("%d", &nmrs);
            conta=conta+nmrs;
        }
    }
    return conta;
}

// int main(){
//     int resposta=faz_conta_direito(4,'-');
//     printf("%d", resposta);
//     return 0;
// }