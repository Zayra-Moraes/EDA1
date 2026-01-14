#include <stdio.h>

int main(){
    char frase[200], primeira[50], ultima[50];
    int i=0, j=0 , inicioultima=0;

    fgets(frase,200,stdin);
    i=0;
    j=0;
    //pula espaco do comeco
    while(frase[i]== ' '){
        i++;
    }

    while(frase[i]!=' ' && frase[i] != '\n' && frase[i]!= '\0'){
        primeira[j]=frase[i];
        i++;
        j++;
    }
    primeira[j]='\0';

    // acha o fim da string
    i = 0;
    while (frase[i] != '\0')
        i++;

    i--; // último caractere válido

    // pula espaços e \n do final
    while (i >= 0 && (frase[i] == ' ' || frase[i] == '\n'))
        i--;

    // agora i está na última letra do sobrenome
    while (i >= 0 && frase[i] != ' ')
        i--;

    inicioultima = i + 1;

    // for(i=0;frase[i] != '\0'; i++){
    //     if (frase[i] ==' ' && frase[i+1] != ' '  &&
    //     frase[i+1] != '\n' && frase[i+1] != '\0'){
    //         inicioultima =i +1;
    //     }        
    // }
    i=inicioultima;
    j=0;
    
    while(frase[i] == ' '){
        i++;}

    while(frase[i] != ' ' && frase[i] != '\n' && frase[i] != '\0'){
        ultima[j]= frase[i];
        i++;
        j++;
    }
    ultima[j]='\0';
// Agora para transformar em maisculas: 'a' - 'A' = 32
    i=0;
    while(primeira[i] != '\0'){
        if(primeira[i] >= 'A' && primeira[i] <= 'Z' ){
            primeira[i] = primeira[i] + 32;
        }
        i++;
    }
    i=0;
    while(ultima[i] != '\0'){
        if(ultima[i] >= 'A' && ultima[i] <= 'Z'){
            ultima[i]= ultima[i] + 32;
        }
        i++;
    }
/*  
    scanf("%s", primeiro);

    while(scanf("%s", ultimo)==1){

    } Isso só funcionaria se terminasse em eof*/

    printf("%s.%s@unb.br\n", primeira, ultima);
    return 0;
}

//primeira vez deu errado 
// porque tem que pensar se tiver mais de um espaco