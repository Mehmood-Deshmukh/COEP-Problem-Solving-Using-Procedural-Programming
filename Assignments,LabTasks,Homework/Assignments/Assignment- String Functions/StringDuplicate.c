#include <stdio.h>
#include <stdlib.h>
char *strcopy(char *dest, const char *src) {
	char *q = dest;
	while(*dest++ = *src++)
		;
	return q;
}
char *strdupl(const char *s){
    char *duplicate = (char *)malloc(3);
    char *result = duplicate;
    strcopy(duplicate, s);
    return result;
}
int main(){
    char *str = "hello", *p;
    p = strdupl(str);
    printf("%s\n", p);
    free(p);
    return 0;
}