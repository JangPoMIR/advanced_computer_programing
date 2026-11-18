#include <stdio.h>

// 입력받은 층수만큼 피라미드 출력하기

int main() {

    int floor;
    printf("피라미드 층수(2 이상)를 입력하시오: ");
    scanf("%d", &floor);
    
    if(floor >= 2) {
        for(int i = 0; i < floor; i++) {
            for(int j = floor - i; j > 1; j--) {
                printf(" ");
            }
            for(int k = 0; k <= i*2; k++) {
                printf("*");
            }
            printf("\n");
        }
    } else {
        printf("올바른 값을 입력하시오!");
    }

    return 0;
}