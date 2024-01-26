#include <stdio.h>

int main() {
    double x;
    int n;
    scanf("%lf", &x);
    scanf("%d", &n);

    if (n <= 15) {
        double result = 1.0;
        double factorial = 1.0;

        for (int i = 1; i <= n; i++) {
            factorial = factorial * i;
            result = result * x;
        }
            result = result / factorial;
            printf("%.2lf\n", result);
    } 
    return 0;
}
