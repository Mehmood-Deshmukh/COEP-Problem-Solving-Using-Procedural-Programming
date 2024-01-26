#include <stdio.h>
#include <limits.h>

int main() {
    int num = 0;
    int max = INT_MIN; 
    while (1) {
        if (scanf("%d", &num) == EOF) {
            break;
        }

        if (num > max) {
            max = num; 
        }
    }

        printf("%d\n", max);

    return 0;
}
