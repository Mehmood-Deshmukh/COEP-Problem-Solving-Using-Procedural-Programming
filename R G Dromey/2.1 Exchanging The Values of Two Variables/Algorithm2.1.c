#include <stdio.h>

int main() {
    int a = 463;
    int b = 721;
    int t;
    t = a;
    a = b;
    b = t;
    printf("%d %d", a, b);
    return 0;
}