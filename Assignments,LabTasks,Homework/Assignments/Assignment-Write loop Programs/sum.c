#include <stdio.h>

int main() {
    int n;
    int sum = 0;
    int sign = 1;
    int term = 1; 

    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        if (sign == 1 && term*sign != 1){
            printf("+");
        }    
        printf("%d", term * sign);
        sum = sum + term * sign;
        term = term + 2; 
        sign = -sign;
    }

    printf("\n%d", sum);

    return 0;
}
