#include <stdio.h>
#include <limits.h>

int main() {
    int first_max = INT_MIN;
    int second_max = INT_MIN;
    int third_max = INT_MIN;
    int num;
    int count = 0;
    while (scanf("%d", &num) != EOF) {
        count++;

        if (num >= first_max) {
            third_max = second_max;
            second_max = first_max;
            first_max = num;
        } else if (num >= second_max) {
            third_max = second_max;
            second_max = num;
        } else if (num >= third_max) {
            third_max = num;
        }
    }

    if (count < 3) {
        printf("not found\n");
    } else {
        printf("%d\n", third_max);
    }

    return 0;
}