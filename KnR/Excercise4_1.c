#include <stdio.h>
int strrindex(const char *s, const char *t) {
    int slen = 0;
    int tlen = 0;

    while (s[slen] != '\0') {
        slen++;
    }
    while (t[tlen] != '\0') {
        tlen++;
    }

    if (tlen == 0)
        return -1;

    for (int i = slen - tlen; i >= 0; i--) {
        int match = 1;
        for (int j = 0; j < tlen; j++) {
            if (s[i + j] != t[j]) {
                match = 0;
                break;
            }
        }
        if (match == 1) {
            return i;
        }
    }

    return -1; 
}
int main() {
    const char *s = "hello, world, hello";
    const char *t = "hello";
    int result = strrindex(s, t);
    printf("%d",result);
    return 0;
}