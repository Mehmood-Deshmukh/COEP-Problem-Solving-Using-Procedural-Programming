// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
void rearrangeArray(int arr[], int k, int len) {
    while(k){
        int temp = arr[0];
        for(int i = 0;i < len; i++){
            arr[i] = arr[i + 1];
        }
        arr[len - 1] = temp;
        k--;
    }
}
int main() {
    int arr[]= {1, 2, 3, 4, 5, 6, 7, 8};
    int len = sizeof(arr)/sizeof(arr[0]);
    
    rearrangeArray(arr, 5, len);
    
    for(int i = 0; i < len; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}