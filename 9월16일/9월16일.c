#include <stdio.h>

int main() {

    int x = 8, y = 7, a = 6, b = 5;
    int re1=0,re2=0,re3=0;

    re1 = ++x * 10;
    re2 = y++ * 10;
    re3 = a++ + --b;

    printf("%d\n", re1);
    printf("%d\n", re2);
    printf("%d\n", re3);
    printf("%d\n", x);
    printf("%d\n", y);
    printf("%d\n", a);
    printf("%d\n", b);

    return 0;
}