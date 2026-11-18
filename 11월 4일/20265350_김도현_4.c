#include <stdio.h>


void students(int n, char ids[][20], char names[][20], int scores[][3]) {
    int i;

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
}

void cal_scores(int n, int scores[][3], int totals[], double avgs[]) {
    int i;
    for (i = 0; i < n; i++) {
        *(totals + i) = *(*(scores + i) + 0) + *(*(scores + i) + 1) + *(*(scores + i) + 2);
        *(avgs + i) = *(totals + i) / 3.0;
    }
}

void print_students(int n, char ids[][20], char names[][20], int scores[][3], int totals[], double avgs[]) {
    int i;
    
    printf("\n학번 성명 국어 영어 수학 총점 평균\n");
    printf("---------------------------------------------------\n");

    for (i = 0; i < n; i++) {
        printf("%-10s %-8s %-6d %-6d %-6d %-6d %-8.2f\n",
        *(ids + i), *(names + i),
        *(*(scores + i) + 0), *(*(scores + i) + 1), *(*(scores + i) + 2),
        *(totals + i), *(avgs + i));
    }
}

int main() {
    int n;
    
    printf("학생 수를 입력하세요: ");
    scanf("%d", &n);
    
    char ids[n][20];
    char names[n][20];
    int scores[n][3];
    int totals[n];
    double avgs[n];
    
    students(n, ids, names, scores);
    cal_scores(n, scores, totals, avgs);
    print_students(n, ids, names, scores, totals, avgs);
    
    return 0;
}