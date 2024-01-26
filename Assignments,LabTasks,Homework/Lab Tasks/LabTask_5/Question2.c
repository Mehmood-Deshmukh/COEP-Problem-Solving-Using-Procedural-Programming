#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int r = n;
    int nCr;
    while (r >=0)
    {
        int num, den1, den2;
        num = 1;
        den1 = 1;
        den2 = 1;
        int i = 1;
        while(i <= n)
        {
            num = num * i;
            i = i + 1;
        }
        int j = 1;
        while(j <= r)
        {
            den1 = den1 * j;
            j = j + 1;
        }
        int k = 1;
        while(k <= n-r)
        {
            den2 = den2 * k;
            k = k + 1;
        }

        nCr = num/(den1 * den2);
        printf("%d ", nCr);
        r = r - 1;
    }
    return 0;
}