#include <stdio.h>

int main() {
    int a,b,c,d,t;
    a = 10;
    b = 20;
    c = 30;
    d = 40;

    printf("%d %d %d %d\n", a, b, c, d);
    t = a;
    a = b;
    b = c;
    c = d;
    d = t;

    printf("%d %d %d %d\n", a, b, c, d);
    return 0;
}