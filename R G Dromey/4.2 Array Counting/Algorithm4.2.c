// Online C compiler to run C program online
#include <stdio.h>
#define MAX 101
int main() {
    int marks[MAX] = {0};
    int i;
    while(scanf("%d", &i) != EOF){
        marks[i]++;
    }
    for(int i = 0; i < MAX; i++){
        printf("%d : %d\n", i, marks[i]);
    }
    return 0;
}