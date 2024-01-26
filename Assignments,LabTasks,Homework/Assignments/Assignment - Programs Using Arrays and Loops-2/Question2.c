int is_non_descending(int *a, int len){
    for(int i = 0; i < len; i++){
        for(int j = i + 1; j < len; j++){
            if(a[i] > a[j]){
                return 0;
            }
        }
    }
    return 1;
}