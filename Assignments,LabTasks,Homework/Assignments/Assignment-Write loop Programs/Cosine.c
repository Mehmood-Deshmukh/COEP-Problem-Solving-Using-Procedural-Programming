#include <stdio.h>
#include <math.h>
#define PI 3.14159265358 // use this

int main() {
    double x;
    scanf("%lf", &x);

    float result = 1.0;
    float term = 1.0;
    float precision = 1e-6;
    int sign = -1;
    int i = 2;
    x = fmod(x, 2 * PI); // use this
    while (fabs(term) >= precision) {
        term *= (x * x) / (i * (i - 1));
        result += sign * term;
        sign = -sign;
        i += 2;
    }
    double d = result;
    d *= 10000.;
    int j = d;
    d = (double) j / 10000.; 
    printf("%.4lf", d);
    return 0;
}
