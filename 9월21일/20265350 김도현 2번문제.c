#include <stdio.h>

int main() {

    float wei,tall,bmi;
    printf("체중(kg)을 입력하세요: ");
    scanf("%f", &wei);
    printf("키(m)를 입력하세요: ");
    scanf("%f", &tall);

    bmi = wei / (tall * tall);
    printf("당신의 BMI는 %.2f입니다.\n", bmi);

    if(bmi >= 24.9) {
        printf("과체중입니다.\n");
    } else if(bmi >= 18.5) {
        printf("표준 체중입니다.\n");
    } else {
        printf("저체중입니다.\n");
    }

    return 0;
}