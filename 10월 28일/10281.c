#include <stdio.h>

int x = 5, y = 10;

void swap() {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    printf("Before swap: x=%d, y=%d\n", x, y);
    swap();
    printf("After swap: x=%d, y=%d\n", x, y);
    return 0;
}