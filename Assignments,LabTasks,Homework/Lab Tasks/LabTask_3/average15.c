#include <stdio.h>

int main() {
    int i = 0;
    float sum = 0;
    float num, avg;
    while(i < 15){
        scanf("%f", &num);
        sum = sum + num;
        i = i + 1;
    }
    avg = sum / 15;
    printf("%.2f", avg);
    return 0;
}