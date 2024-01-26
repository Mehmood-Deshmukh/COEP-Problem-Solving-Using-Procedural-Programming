#include <stdio.h>
#define swap(t, x, y) t = x; x = y; y = t;
int main() {
    int temp , x, y;
    x = 10;
    y = 20;
    printf("%d %d\n", x,y);
    swap(temp , x , y);
    printf("%d %d", x,y);
    return 0;
}