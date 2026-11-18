#include <stdio.h>

int square(int n, int k) {
    if(k >= 1) {
        return square(n, k - 1) * n;
    } else {
        return 1;
    }
}

int main() {
    int x, y;
    printf("지수를 입력하시오: ");
    scanf("%d", &x);
    printf("가수를 입력하시오: ");
    scanf("%d", &y);

    printf("%d의 %d 승: %d", x,y,square(x, y));

}