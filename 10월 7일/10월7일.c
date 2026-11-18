#include <stdio.h>

int fac(int n) {
    if(n > 1) {
        return n * fac(n - 1);
    } else if(n >= 0 ) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    int x;
    scanf("%d", &x);

    printf("%dÀÇ °è½Â: %d",x,fac(x));

    return 0;
}   