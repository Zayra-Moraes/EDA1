#include <stdio.h>

int main(){
    int i=0, o=0;
    char entrada[150];
    //while(fgets(entrada,150,stdin)==1)
    while(scanf("%s", entrada)==1){
        while(entrada[i] != '\n' && entrada[i] != '\0'){
            if(entrada[i] == 'o'){
                o++;
            }
            i++;
        }
        i=0;
    }
    printf("%d\n", o);
    return 0;
}