#include <stdio.h>
#include <stdlib.h>

void input_grade(int n, char (*ids)[20], char (*names)[20], int (*scores)[3]) {
    for (int i = 0; i < n; i++) {
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
}

void calculate_grade(int n, char (*ids)[20], char (*names)[20], int (*scores)[3], int *total, double *avg) {
    for (int i = 0; i < n; i++) {
        total[i] = scores[i][0] + scores[i][1] + scores[i][2];
        avg[i] = total[i] / 3.0;
    }
}

void output_grade(int n, char (*ids)[20], char (*names)[20], int (*scores)[3], int *total, double *avg) {
    printf("\n학번 성명 국어 영어 수학 총점 평균 \n");
    for (int i = 0; i < n; i++) {
        printf("%s %s %d %d %d %d %.2f\n",
        ids[i], names[i], scores[i][0], scores[i][1], scores[i][2], total[i], avg[i]);
    }
}

int main() {
    int n;
    printf("학생 수를 입력하시오: ");
    scanf("%d", &n);

    char (*ids)[20] = (char (*)[20])malloc(sizeof(char[20]) * n);
    char (*names)[20] = (char (*)[20])malloc(sizeof(char[20]) * n);
    int (*scores)[3] = (int (*)[3])malloc(sizeof(int[3]) * n);
    int *total = (int *)malloc(sizeof(int) * n);
    double *avg = (double *)malloc(sizeof(double) * n);

    if (ids == NULL || names == NULL || scores == NULL || total == NULL || avg == NULL) {
        printf("동적 할당 실패!");
        free(ids);
        free(names);
        free(scores);
        free(total);
        free(avg);
        return 1;
    }

    input_grade(n,ids,names,scores);
    calculate_grade(n,ids,names,scores,total,avg);
    output_grade(n,ids,names,scores,total,avg);

    free(ids);
    free(names);
    free(scores);
    free(total);
    free(avg);
    return 0;
}   