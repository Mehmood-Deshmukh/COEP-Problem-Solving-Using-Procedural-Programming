#include <stdio.h>

int main() {
    int n,a;
    int sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n ; i ++)
    {
        scanf("%d", a);
        sum = sum + a;
    }
    
    return 0;
}