#include <stdio.h>

int main() {
    int marks;
    int count = 0;
    while (scanf("%d", &marks) != EOF){
        if (marks >= 50)
        {
            count++;
        }
        
    }
    printf("%d", count);
    return 0;
}