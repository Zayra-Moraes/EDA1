#include <stdio.h>

void move_x(char *s) {
    if (*s == '\0' || *s == '\n') {
        return;
    }

    if (*s != 'x') {
        printf("%c", *s);
    }

    move_x(s + 1);

    if (*s == 'x') {
        printf("x");
    }
}

int main() {
    char str[101];
    fgets(str, 101, stdin);
    move_x(str);
    printf("\n");
    return 0;
}
