#include <stdio.h>
#include <ctype.h>

int getint(int *pn) {
    int c, sign;
    
    while (isspace(c = getchar()))  // Skip white space
        ;
    
    if (!isdigit(c) && c != EOF && c != '+' && c != '-') {
        ungetc(c, stdin);  // It's not a number
        return 0;
    }
    
    sign = (c == '-') ? -1 : 1;
    
    if (c == '+' || c == '-')
        c = getchar();
    
    for (*pn = 0; isdigit(c); c = getchar())
        *pn = 10 * *pn + (c - '0');
    
    *pn *= sign;
    
    if (c != EOF)
        ungetc(c, stdin);
    
    return c;
}

int main() {
    int n, array[128], getint(int *);
    
    for (n = 0; n < 128 && getint(&array[n]) != EOF; n++){
        printf("%d ", array[n]);
    }

    return 0;
}

