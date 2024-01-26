#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
char *stranybyte(const char *s, const char *accept)
{
    const char *p = s;
    const char *q = accept;

    char *result = (char *)malloc(2);

    for (int i = 0; p[i]; i++)
    {
        for (int j = 0; q[j]; j++)
        {
            if (p[i] == q[j])
            {
                return (char *)p+i;
            }
        }
    }
    return NULL;
}
int main()
{
    printf("%s\n", stranybyte("abhijit", "xiy") ? stranybyte("abhijit", "xiy") : "");
    return 0;
}