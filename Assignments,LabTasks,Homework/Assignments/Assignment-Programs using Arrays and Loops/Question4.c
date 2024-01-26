int max_repeated(int *arr, int len) {
 

    int max_count = 0;  
    int max_repeating = arr[0]; 
    int last_index = -1;        
    for (int i = 0; i < len; i++) {
        int count = 1;
        for (int j = i + 1; j < len; j++) {
            if (arr[i] == arr[j]) {
                count++;
                last_index = j;
            }
        }

        if (count > max_count || (count == max_count && last_index > i)) {
            max_count = count;
            max_repeating = arr[i];
        }
    }
    if (max_count == 1) {
        return arr[len-1];
    }
    return max_repeating;
}