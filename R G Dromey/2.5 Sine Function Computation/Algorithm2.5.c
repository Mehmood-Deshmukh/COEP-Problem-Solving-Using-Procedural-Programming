#include <stdio.h>
#include <math.h>

int main() {
    double x;
    scanf("%lf", &x);

    float result = x;
    float term = x;
    float precision = 1e-6;
    int sign = -1;
    int i = 3;

    while (fabs(term) >= precision) {
        term *= (x * x) / (i * (i - 1));
        term = term*sign;
        result +=  term;
        // sign = -sign;
        i += 2;
    }
    printf("%.4lf", result);
    return 0;
}
