#include <stdio.h>

int main() {
    unsigned n;
    int factorial = 1;
    scanf("%d", &n);
    if (n == 0)
    {
        printf("%d", factorial);
    }
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    
    printf("%d", factorial);
    
    return 0;
}