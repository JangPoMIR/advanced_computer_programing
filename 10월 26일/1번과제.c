#include <stdio.h>

int main() {
    int num[5][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20},
        {21,22,23,24,25}
    }; // 입력값을 미리 입력 받았다고 가정

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", num[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%d ", num[j][i]);
        }
        printf("\n");
    }

    printf("\n");

    for(int i = 0; i < 5; i++) {
        if(i % 2 == 0) {
            for(int j = 0; j < 5; j++) {
                printf("%d ", num[i][j]);
            }
        } else {
            for(int j = 4; j >= 0; j--) {
                printf("%d ", num[i][j]);
            }
        }
        printf("\n");
    }

    return 0;
}