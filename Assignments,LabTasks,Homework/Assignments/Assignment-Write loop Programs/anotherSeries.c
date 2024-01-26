#include <stdio.h>

int main() {
    int n, i;
    int num = 1;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d ", num);
        num = num + num;
    }
    return 0;
}
