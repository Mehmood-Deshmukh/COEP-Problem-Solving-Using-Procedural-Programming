    #include <stdio.h>
    
    void reverseArray(int a[], int n) {
        for(int i = 0,j = n - 1; i < j; i++, j--){
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
    
    int main() {
        int arr[] = {1, 2, 3, 4, 5, 6};
        int n = sizeof(arr) / sizeof(arr[0]);
        printf("Original array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    
        reverseArray(arr, n);
    
        printf("\nReversed array: ");
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    
        return 0;
    }
