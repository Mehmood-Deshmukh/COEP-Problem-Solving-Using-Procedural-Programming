#include <stdio.h>

void monotone(int a[], int n, int *maxlength) {
    int length[101];  
    int pmax = 1;     
    *maxlength = 1;    

    length[1] = 1;

    for (int i = 2; i <= n; i++) {
        int current = a[i - 1];

        if (current < a[pmax - 1]) {
            int max = 1;
            int maxj = length[1];

            for (int j = 2; j < i; j++) {
                if (a[j - 1] < current) {
                    if (length[j] > max) {
                        max = length[j];
                        maxj = length[j];
                    }
                }
            }

            length[i] = max + 1;

            if (length[i] > *maxlength) {
                *maxlength = length[i];
                pmax = i;
            }
        } else {
            pmax = i;
            length[i] = 1;
        }
    }
}

int main() {
    int a[] = {5, 2, 8, 6, 3, 6, 9, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int maxlength;

    monotone(a, n, &maxlength);
    
    printf("%d\n", maxlength);

    return 0;
}
