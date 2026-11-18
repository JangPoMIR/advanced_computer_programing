#include <stdio.h>

void getMaxMinNumber(int a, int b, int c) {
    int Max, Min;

    if(a > b) {
        Max = a;
        if(b > c) {
            Min = c;
        } else if(c > a) {
            Max = c;
            Min = b;
        } 
    } else {
        Max = b;
        if(a > c) {
            Min = c;
        } else if(c > a) {
            Max = c;
            Min = a;
        }
    }

    printf("최댓값: %d\n",Max);
    printf("최솟값: %d\n",Min);
}


int main() {

    int A,B,C;
    
    printf("첫번째 수를 입력하시오: ");
    scanf("%d" , &A);
    printf("두번째 수를 입력하시오: ");
    scanf("%d" , &B);
    printf("세번째 수를 입력하시오: ");
    scanf("%d" , &C);

    getMaxMinNumber(A,B,C);

    return 0;
}