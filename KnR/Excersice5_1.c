#include <stdio.h>
#include <ctype.h>

int getfloat(double *pf);

int main() {
    double n;

    while (getfloat(&n) != EOF) {
        printf("Float read: %f\n", n);
    }

    return 0;
}

int getfloat(double *pf) {
    int c, sign;
    double power = 1.0;

    while (isspace(c = getchar()))  // Skip white space
        ;

    if (!isdigit(c) && c != EOF && c != '+' && c != '-' && c != '.') {
        ungetc(c, stdin);  // It's not a number
        return 0;
    }

    sign = (c == '-') ? -1 : 1;

    if (c == '+' || c == '-' || c == '.') {
        c = getchar();
    }

    for (*pf = 0.0; isdigit(c); c = getchar()) {
        *pf = 10.0 * *pf + (c - '0');
    }

    if (c == '.') {
        c = getchar();
    }

    for (power = 1.0; isdigit(c); c = getchar()) {
        *pf = 10.0 * *pf + (c - '0');
        power *= 10.0;
    }

    *pf *= sign / power;

    if (c != EOF) {
        ungetc(c, stdin);
    }

    return c;
}
