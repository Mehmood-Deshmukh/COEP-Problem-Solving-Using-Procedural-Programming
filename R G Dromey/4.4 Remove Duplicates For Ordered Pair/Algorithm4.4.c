#include <stdio.h>
int removeduplicates(int a[], int len){
    int newlen = 0;
    for(int i = 0; i < len; i++){
        if(a[i] != a[i + 1]){
            a[newlen]= a[i];
            newlen++;
        }
    }
    return newlen--;
}
int main() {
    int a[] = {2, 2, 8, 15, 23, 23, 23, 23, 26, 29, 30, 32, 32};
    int len = sizeof(a)/sizeof(a[0]);
    len = removeduplicates(a, len);
    for(int i = 0; i < len; i++){
        printf("%d ", a[i]);
    }
    return 0;
}