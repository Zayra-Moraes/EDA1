#include <stdio.h>
// int main(){
//     printf("Ola Mundo \n");
//     return 0;
// }

//Ponteiros:
int main(){
    void *p;
    int x, *p1;
    x=10;
    p1=&x;
    p=p1;
    printf("&x=%p | p= %p | p1=%p\n", &x, p, p1);
    printf("x=%d | p= %d | p1=%d\n", x, *(int*)p, *p1);
    return 0;
}