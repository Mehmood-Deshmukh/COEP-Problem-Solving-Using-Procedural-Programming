int maxabsdiff(int a[] , int len){
    int maxDifference = 0, CurrDifference;
    for(int i = 0; i < len - 1; i++){
        int j = i + 1;
        CurrDifference = a[i] - a[j];
        if (CurrDifference < 0)
        {
            CurrDifference = - CurrDifference;
        }
        
        if (CurrDifference >= maxDifference)
        {
            maxDifference = CurrDifference;
        }
    }
    return maxDifference;
}