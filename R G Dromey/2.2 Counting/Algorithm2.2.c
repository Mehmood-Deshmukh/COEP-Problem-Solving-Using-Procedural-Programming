#include <stdio.h>

int main() {
    int marks,n;
    int count = 0;
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &marks);
        if (marks >= 50)
        {
            count++;
        }
        
    }
    printf("%d", count);
    return 0;
}