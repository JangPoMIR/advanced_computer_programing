#include <stdio.h>


int main() {
    int dan, gop;
    printf("실행시킬 구구단 단수를 입력하시오: ");
    scanf("%d", &dan);
    printf("실행시킬 구구단 곱수를 입력하시오: ");
    scanf("%d", &gop);

    if( 2 <= dan && dan <= 9 && 1 <= gop && gop <= 9 ) {
        for(int i = 1; i <= gop; i++) {
            for(int j = 2; j <= dan; j++) {
                printf("%d * %d = %d  ", j, i, i*j);
            }
            printf("\n");
        }
    } else {
        printf("올바른 값을 입력하십시오!");
    }

    return 0;
}