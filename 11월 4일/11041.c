#include <stdio.h>

int main() {
    int i,j,n;
    printf("학생 수를 입력하시오: ");
    scanf("%d", &n);

    char ids[n][20];
    char names[n][20];
    int scores[n][3]; 
    int totals[n];
    double avgs[n];

    for (i = 0; i < n; i++) {
        printf("\n[%d번째 학생 정보 입력]\n", i + 1);
        printf("학번: ");
        scanf("%s", ids[i]);
        printf("성명: ");
        scanf("%s", names[i]);
        printf("국어 점수: ");
        scanf("%d", &scores[i][0]);
        printf("영어 점수: ");
        scanf("%d", &scores[i][1]);
        printf("수학 점수: ");
        scanf("%d", &scores[i][2]);
    }

    printf("\n학번\t\t성명\t국어\t영어\t수학\t총점\t평균\t학점\n");
    
    for (i = 0; i < n; i++) {
        int total = scores[i][0] + scores[i][1] + scores[i][2];
        double avg = total / 3.0;
        printf("%s\t%s\t%d\t%d\t%d\t%d\t%.2f\t", ids[i], names[i], scores[i][0], scores[i][1], scores[i][2], total, avg);
        if( 100 >= avg && avg >= 90 ) { 
            printf("A");
        } else if(avg >= 80) {
            printf("B");
        } else if(avg >= 70) {
            printf("C");
        } else {
            printf("F");
        }
        printf("\n");
    }
}