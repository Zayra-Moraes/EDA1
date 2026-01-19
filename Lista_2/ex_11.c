#include <stdio.h>

void swap (int *a, int *b){
    int _a,_b;//eu poderia usar só uma variavel temporaria em vez de duas
    _a=*a;
    _b=*b;
    *b=_a;
    *a=_b;
    return;
    //    int temp = *a;
    // *a = *b;
    // *b = temp;

}

int main(){
    int c=2;
    int d=4;
    
    swap(&c,&d);
    printf("c=%d || d= %d", c,d);
    return 0;

}