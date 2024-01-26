#include <stdio.h>

int main() {
    int marks;
    int count;
    scanf("%d", &count);
    int n = count;
    for (int i = 1; i <= n; i++){
        scanf("%d", &marks);
        if (marks < 50)
        {
            count--;
        }
        
    }
    printf("%d", count);
    return 0;
}