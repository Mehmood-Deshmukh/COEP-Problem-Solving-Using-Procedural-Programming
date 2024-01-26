#include <stdio.h>

int main() {
    int a,b,c,t;
    a = 10;
    b = 20;
    c = 30;

    printf("%d %d %d\n", a, b, c);
    t = c;
    c = b;
    b = a;
    a = t;

    printf("%d %d %d", a, b, c);
    return 0;
}