#include <stdio.h>
#include <string.h>

const char *strstr1(const char *haystack,const char *needle) {
  const char *p = haystack;
  const char *q = needle;
  const char *temp = p;
  int index = 0;
  while (*p != '\0') {
    if (*p == *q) {
      while (*p == *q && *q != '\0') {
        p++;
        q++;
      }

      if (*q == '\0') {
        return temp + index;
      }
    }

    p++;
    index++;
  }

  return NULL;
}
int main() {
    const char *cs, *ct;
    cs = "abhijit is here";
    ct = "is";
    
    printf("%s", strstr1(cs, ct));
    return 0;
}

