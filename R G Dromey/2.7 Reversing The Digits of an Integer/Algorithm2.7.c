#include <stdio.h>

int main() {
    int number,reverse;
    reverse = 0;
    scanf("%d", &number);
    int remainder;

    while(number){
        remainder = number % 10;
        reverse = reverse*10 + remainder;
        number /= 10;
    }
    printf("%d", reverse);
    return 0;
}