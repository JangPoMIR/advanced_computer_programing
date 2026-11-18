#include <stdio.h>


int main() {
    int i, n;
    printf("학생 수를 입력하세요: ");
    scanf("%d", &n);

    char ids[n][20];
    char names[n][20];
    int scores[n][3];

    for (i = 0; i < n; i++) {
        printf("\n[%d번째 학생 정보 입력]\n", i + 1);
        printf("학번: ");
        scanf("%s", *(ids + i)); 
        printf("성명: ");
        scanf("%s", *(names + i));
        printf("국어 점수: ");
        scanf("%d", *(scores + i) + 0);
        printf("영어 점수: ");
        scanf("%d", *(scores + i) + 1);
        printf("수학 점수: ");
        scanf("%d", *(scores + i) + 2);
    }
    
    printf("\n학번 성명 국어 영어 수학 총점 평균 \n");

    for (i = 0; i < n; i++) {
        int kor = *(*(scores + i) + 0);
        int eng = *(*(scores + i) + 1);
        int mat = *(*(scores + i) + 2);
        int total = kor + eng + mat;
        double avg = total / 3.0;
        printf("%-8s %-8s %-6d %-6d %-6d %-6d %-8.2f\n", *(ids + i), *(names + i), kor, eng, mat, total, avg);
    }
    
    return 0;
}