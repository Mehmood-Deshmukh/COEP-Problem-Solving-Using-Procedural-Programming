#include <stdio.h>

int main() {
    int num, count1, count2;
    count1 = 0;
    count2 = 0;
    while(scanf("%d", &num) != EOF){
        if (num < 0)
        {
            count2++;
        } else {
            count1++;
        }
    }
        printf("Negative numbers are %d\n", count2);
        printf("Non Negative numbers are %d", count1);
    return 0;
}