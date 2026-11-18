#include <stdio.h>

int main() {
    
    float a;

    printf("종합 소득을 입력하세요(만 원): ");
    scanf("%f",&a);

    if(a > 100000) {
        printf("소득세는 %.2f만 원입니다.", a*0.45 - 6540);
    } else if(a > 50000) {
        printf("소득세는 %.2f만 원입니다.", a*0.42 - 3540);
    } else if(a > 30000) {
        printf("소득세는 %.2f만 원입니다.", a*0.40 - 2540);
    } else if(a > 15000) {
        printf("소득세는 %.2f만 원입니다.", a*0.38 - 1940);
    } else if(a > 8800) {
        printf("소득세는 %.2f만 원입니다.", a*0.35 - 1490);
    } else if(a > 4600) {
        printf("소득세는 %.2f만 원입니다.", a*0.24 - 522);
    } else if(a > 1200) {
        printf("소득세는 %.2f만 원입니다.", a*0.15 - 108);
    } else {
        printf("소득세는 %.2f만 원입니다.", a*0.06);
    }

    return 0;
}