#pragma warning(disable:4996)
#include <stdio.h>

void gradePrint(int (*g)[4]) {
    int i, j, k, max_idx;
    int tot[3] = { 0 };        
    double avg[3] = { 0.0 };
    char credit[3];            


    for (i = 0; i < 3; i++) {
        for (j = 1; j < 4; j++) {
            tot[i] += g[i][j];
        }
        avg[i] = tot[i] / 3.0;

        if (avg[i] >= 90) credit[i] = 'A';
        else if (avg[i] >= 80) credit[i] = 'B';
        else if (avg[i] >= 70) credit[i] = 'C';
        else if (avg[i] >= 60) credit[i] = 'D';
        else credit[i] = 'F';
    }

    for (i = 0; i < 2; i++) {
        max_idx = i;
        for (j = i + 1; j < 3; j++) {
            if (tot[j] > tot[max_idx]) {
                max_idx = j;
            }
        }

        if (max_idx != i) {

            int tempTot = tot[i];
            tot[i] = tot[max_idx];
            tot[max_idx] = tempTot;
            

            double tempAvg = avg[i];
            avg[i] = avg[max_idx];
            avg[max_idx] = tempAvg;


            char tempCredit = credit[i];
            credit[i] = credit[max_idx];
            credit[max_idx] = tempCredit;

            for (k = 0; k < 4; k++) {
                int tempGrade = g[i][k];
                g[i][k] = g[max_idx][k];
                g[max_idx][k] = tempGrade;
            }
        }
    }

    // 3. 성적표 출력
    printf("\n");
    printf("=========================================================\n");
    printf("                       성  적  표                        \n");
    printf("=========================================================\n");
    printf(" 순위   학번   국어   영어   수학   총점    평균   학점\n");
    printf("---------------------------------------------------------\n");

    for (i = 0; i < 3; i++) {
        // 내림차순 정렬되어 있으므로 i + 1이 곧 순위가 됩니다.
        printf("  %d등  %5d   %3d    %3d    %3d    %3d   %6.2lf    %c\n",
               i + 1, g[i][0], g[i][1], g[i][2], g[i][3], tot[i], avg[i], credit[i]);
    }
    printf("=========================================================\n");
}

int main()
{
    int i, j;
    int grade[3][4];

    for (i = 0; i < 3; i++) {
        printf("%d번째 학생의 학번, 국어, 영어, 수학 점수 입력 : ", i + 1);
        for (j = 0; j < 4; j++) {
            scanf("%d", &grade[i][j]);
        }
    }

    gradePrint(grade);

    return 0;
}