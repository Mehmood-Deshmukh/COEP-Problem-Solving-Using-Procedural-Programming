#include <stdio.h>

int main() {
    int a , b;
    a = 10;
    b = 20;

    printf("%d %d\n",a , b);

    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("%d %d",a , b);
    return 0;
}