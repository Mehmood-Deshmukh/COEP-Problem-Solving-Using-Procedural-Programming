#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d%d", &num1, &num2);

    int a = 1, b = 1, c;
    int isConsecutive = 0;
    while (a <= num2) {
        if (a == num1 && b == num2) {
            isConsecutive = 1;
            break;
        }
        c = a + b;
        a = b;
        b = c;
    }
    if (isConsecutive) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}
