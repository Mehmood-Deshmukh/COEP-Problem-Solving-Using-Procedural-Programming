#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int prev1 , prev2, curr;
    prev1 = 0;
    prev2 = 1;
    curr = 0;
    for (int i = 0; i < n; i++)
    {
         printf("%d ", curr);
        curr = prev1 + prev2;
        prev2 = prev1;
        prev1 = curr;
    }
    
    
    return 0;
}