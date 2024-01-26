#include <stdio.h>

int findMax(int a, int b, int c) {
    int max = a;
    
    if (b > max) {
        max = b;
    }
    
    if (c > max) {
        max = c;
    }
    
    return max;
}


int main() {
    int num1, num2, num3;
    
    scanf("%d %d %d", &num1, &num2, &num3);

    int max = findMax(num1, num2, num3);
    printf("%d",max);
    
    return 0;
}
