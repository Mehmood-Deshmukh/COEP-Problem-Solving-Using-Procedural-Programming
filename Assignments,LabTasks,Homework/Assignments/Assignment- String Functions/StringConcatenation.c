#include <stdio.h>
char *strconcat(char *dest, const char *src){
    char *result = dest;
    while(*dest != '\0'){
        dest++;
    }

    while(*src != '\0'){
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';

    return result;
}
int main() {
    char b[16] = "abhijit", a[16]="coep";
    printf("%s\n", strconcat(b, a));
    return 0;
}