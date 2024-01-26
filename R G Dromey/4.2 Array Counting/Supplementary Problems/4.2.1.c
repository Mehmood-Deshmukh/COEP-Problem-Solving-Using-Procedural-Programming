// Online C compiler to run C program online
#include <stdio.h>
#define MAX 10
int main() {
    int marks[MAX] = {0};
    int i;
    while(scanf("%d", &i) != EOF){
        marks[i/10]++;
    }
    for(int i = 0; i < MAX; i++){
        printf("%d%% - %d%% : %d\n", i*10, i * 10 + 10, marks[i]);
    }
    return 0;
}