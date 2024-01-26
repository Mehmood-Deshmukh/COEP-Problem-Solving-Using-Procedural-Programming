// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#define MAX 101

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int marks[MAX] = {0};
    int i,Students = 0;
    int TotalMarks = 0;
    int MarkList[128];
    while(scanf("%d", &i) != EOF){
        marks[i]++;
        TotalMarks+= i;
        MarkList[Students]  = i;
        Students++;
    }
    double mean = (double)TotalMarks/Students;
    qsort(MarkList, Students, sizeof(int), compare);
    double median = 0;
    if (Students % 2 == 0) {
        median = (MarkList[(Students / 2) - 1] + MarkList[(Students / 2)]) / 2.0;
    } else {
        median = MarkList[(Students / 2)];
    }

    for(int i = 0; i < MAX; i++){
        printf("%d : %d\n", i, marks[i]);
    }
    for(int i = 0; i < Students; i++){
        printf("%d \n", MarkList[i]);
    }
    printf("%lf\n", mean);
    printf("%d\n", Students);
    printf("%lf\n", median);
    return 0;
}