void reverse(int a[], int len){
    for(int i = 0; i < len/2; i++){
        int temp = a[i];
        a[i] = a[len-1-i];
        a[len-1-i] = temp;
    }
}