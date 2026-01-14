#include <stdio.h>

int main(){
    int disciplinas;
    scanf("%d", &disciplinas);
    int ano, semestre, materias ;
    int maxreprovacoes=0;
    int cods=0;
    int codrepro[100];

    //faz o scanf, ve quantas matérias e armazena os mais reprovados:
    while(scanf("%d %d %d",&ano , &semestre, &materias)==3){
        cods=0;
        maxreprovacoes=0;
        int codigo, matriculados, aprovados;
        for(int i=0; i<materias;i++){
            scanf("%d %d %d", &codigo, &matriculados, &aprovados);
            int reprovados;
            reprovados=matriculados-aprovados;
            if(reprovados>maxreprovacoes){
                maxreprovacoes=reprovados;
                cods=0;
                codrepro[cods++]=codigo;

            }
            //se tiver dois iguais
            else if(reprovados==maxreprovacoes){
                codrepro[cods]=codigo;
                cods++;
            }

        }

    //aqui ordena:
    for (int i = 0; i < cods - 1; i++) {
        for (int j = 0; j < cods - 1 - i; j++) {
            if (codrepro[j] > codrepro[j + 1]) {
                int temp = codrepro[j];
                codrepro[j] = codrepro[j + 1];
                codrepro[j + 1] = temp;
            }
        }
    }

    //printa na formatacao
    printf("%d/%d\n",ano,semestre);
    for(int i=0;i<cods;i++){
        printf("%d ", codrepro[i]);
    }
    printf("\n\n");
    }
    return 0;
}

// int main(){
//     int disciplinas;
//     scanf("%d", &disciplinas);
//     int ano, semestre, materias ;
//     scanf("%d %d %d",&ano , &semestre, &materias);
//     float reprovacoes[materias];
//     float menor;
//     int codigo[materias], matriculados, aprovados;
//     int ind=0;
//     for(int i=0; i<materias;i++){
//         scanf("%d %d %d", &codigo[i], &matriculados, &aprovados);
//         float indice= aprovados/matriculados;
//         aprovacoes[i]= indice;
//     }
//     menor=aprovacoes[0];
//     for(int i=1;i<materias; i++){
//         if(aprovacoes[i]<menor){
//             menor =aprovacoes[i];
//             ind=i;
//         }
//     }
//     printf("%d/%d\n",ano,semestre);
//     printf("%d\n", codigo[ind]);
//     return 0;
// }