int counttimes(int a[], int len, int number) {
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (a[i] == number) {
            count++;
        }
    }
    return count;
}

int removedupl_k(int a[], int len, int k) {
    for (int i = 0; i < len; i++) {
        if (a[i] != -1) {
            int count = counttimes(a, len, a[i]);
            if (count >= k) {
                for (int j = i + 1; j < len; j++) {
                    if (a[j] == a[i]) {
                        a[j] = -1;
                    }
                }
            }
        }
    }

    int newcount = 0;
    for (int i = 0; i < len; i++) {
        if (a[i] != -1) {
            a[newcount] = a[i];
            newcount++;
        }
    }
    return newcount;
}