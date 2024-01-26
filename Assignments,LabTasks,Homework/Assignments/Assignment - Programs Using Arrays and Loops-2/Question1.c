void movetozero(int a[], int len){
    int min = a[0];
    for(int i = 0; i < len; i++){
        if(a[i]<min){
            min = a[i];
        }
    }
    a[0] = min;
}