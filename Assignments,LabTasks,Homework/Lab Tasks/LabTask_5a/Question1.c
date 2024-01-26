#include <stdio.h>

int max(int a, int b) {
    int largest;
    if(a >= b) {
        largest = a;
    } else {
        largest = b;
    }
    return largest;
}

int main() {
    int num1, num2;

    while (scanf("%d%d", &num1, &num2) != -1) {
        int maximum = max(num1, num2);
        printf("%d\n", maximum);
    }

    return 0;
}
