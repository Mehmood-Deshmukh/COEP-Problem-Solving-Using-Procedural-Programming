#include <stdio.h>

void OddEven(int a[], int len) {
    int temp, evenIndex = 0;

    for (int i = 0; i < len; i++) {
        if (i % 2 == 0) {
            temp = a[i];
            a[i] = a[evenIndex];
            a[evenIndex] = temp;
            evenIndex++;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int len = sizeof(arr) / sizeof(arr[0]);

    OddEven(arr, len);

    for (int i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
