#include<stdio.h>
#include<limits.h>
void max(int arr[], int len){
    int Maximum = INT_MIN;
    int count;
    for(int i = 0; i < len; i++){
        if(arr[i] > Maximum){
           Maximum = arr[i];
           count = 1;
        } else if(arr[i] == Maximum){
            count++;
        }
    }
        printf("%d %d\n", Maximum, count);
}

int main() {
    int i = 0, arr[128], len = 0;
    while(scanf("%d", &arr[i++]) != -1){
        len++;
    }
    max(arr,len);
    return 0;
}
