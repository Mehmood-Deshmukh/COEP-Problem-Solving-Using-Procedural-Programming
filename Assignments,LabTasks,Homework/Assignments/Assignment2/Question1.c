#include<stdio.h>
int main(){
    int day;
    scanf("%d", &day);
    if (day <= 31) {
        printf("%d", day);
        printf(" 1");
    } else if (day <= (31 + 28)){
        printf("%d", day-31);
        printf(" 2");
    } else if (day <= (31 + 28 + 31)){
        printf("%d", day - (31 + 28));
        printf(" 3");
    } else if (day <= (31 + 28 + 31 + 30)){
        printf("%d", day - (31 + 28 + 31));
        printf(" 4");
    } else if (day <= 31 + 28 + 31 + 30 + 31){
        printf("%d", day- (31 + 28 + 31 + 30));
        printf(" 5");
    } else  if (day <= 31 + 28 + 31 + 30 + 31 + 30){
        printf("%d", day-(31 + 28 + 31 + 30 + 31));
        printf(" 6");
    } else  if (day <= 31 + 28 + 31 + 30 + 31 + 30 + 31){
        printf("%d", day-(31 + 28 + 31 + 30 + 31 + 30));
        printf(" 7");
    } else  if (day <= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31){
        printf("%d", day-(31 + 28 + 31 + 30 + 31 + 30 + 31));
        printf(" 8");
    } else  if (day <= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30){
        printf("%d", day-(31 + 28 + 31 + 30 + 31 + 30 + 31 + 31));
        printf(" 9");
    } else  if (day <= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31){
        printf("%d", day-(31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30));
        printf(" 10");
    } else  if (day <= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30){
        printf("%d", day-(31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31));
        printf(" 11");
    } else  if (day <= 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30 + 31){
        printf("%d", day-(31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30));
        printf(" 12");
    } else {
        printf("invalid");
    }
    return 0;
}