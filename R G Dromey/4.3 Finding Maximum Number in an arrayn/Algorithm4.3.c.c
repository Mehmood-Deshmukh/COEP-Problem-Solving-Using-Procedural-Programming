#include <stdio.h>
#include <stdlib.h>
int compare(const void *a, const void *b){
    return (*(int*)a - *(int*)b);
}
int main() {
    int Numbers[128],len = 0;
    while(scanf("%d", &Numbers[len++]) != EOF);
    len--;
    qsort(Numbers, len, sizeof(int), compare);
    
    printf("%d", Numbers[len -1 ]);
    return 0;   
}