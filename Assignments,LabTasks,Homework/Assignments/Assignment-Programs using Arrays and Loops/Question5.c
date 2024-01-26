#include<stdio.h>
#include<limits.h>
int findmax(int arr[], int len){
    int Maximum = INT_MIN;
    for(int i = 0; i < len; i++){
        if(arr[i] > Maximum){
           Maximum = arr[i];
        }
    }
        return Maximum;
}