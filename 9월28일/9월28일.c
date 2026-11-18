#include <stdio.h>

int main() {

    int gook, su, en;
    float avg;

    scanf("%d %d %d",&gook,&en,&su);

    avg = (float)(gook + su + en)/3;

    if(avg >= 60 && gook >= 60 && en >= 60 && su >= 60) {
        printf("합격");
    } else if (avg >= 60 && (gook < 40 || en < 40 || su < 40)) {
        if(gook < 40) {
            printf("국어");
        }
        if(en < 40) {
            printf("영어");
        }
        if(su < 40) {
            printf("수학");
        }
        printf(" 과락으로 불합격");
    } else {
        printf("평균 미달 불합격");
    }
    return 0;
}