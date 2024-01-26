#include<stdio.h>
#include<limits.h>
int second_max(int arr[], int len){
    if (len == 1){
        return INT_MIN;
    }
    int FirstMax = INT_MIN;
    int SecondMax = INT_MIN;

    for(int i = 0; i < len; i++){
        if (arr[i] > FirstMax)
        {
            SecondMax = FirstMax;
            FirstMax = arr[i];
        } else if (arr[i] > SecondMax) {
            SecondMax = arr[i];
        }
        
    }

    return SecondMax;
}
