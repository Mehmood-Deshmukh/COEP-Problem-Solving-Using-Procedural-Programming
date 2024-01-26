#include <stdio.h>

int main() {
    int number, remainder, quotient, octal;
    scanf("%d", &number);
    quotient = number;
    int i = 1;
    while (quotient)
    {
        octal +=  quotient % 8 * i;
        quotient /= 8;
        i *= 10;
    }
    printf("%d", octal);
    return 0;
}