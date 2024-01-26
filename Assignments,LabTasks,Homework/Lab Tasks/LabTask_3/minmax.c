#include <stdio.h>
#include <math.h>
int main() {
    float number, MaxNumber, MinNumber;
    int n;
    scanf("%d", &n);
    scanf("%f", &number);
    MaxNumber = MinNumber = number;
    int i = 1;
    while(i < n){
        scanf("%f", &number);
        if (number > MaxNumber)
        {
            MaxNumber = number;
        } else if (number < MinNumber)
        {
            MinNumber = number;
        }
        i = i + 1;
    }
    printf("Maximum number: %.2lf\n", MaxNumber);
    printf("Minimum number: %.2lf\n", MinNumber);
    return 0;
}