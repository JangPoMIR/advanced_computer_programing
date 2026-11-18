#pragma warning(disable:4996)
#include <stdio.h>

void gradePrint(int grade[3][3]) {
    int i, j, k, max_idx;
    int num[3] = { 1, 2, 3 }; 
    int tot[3] = { 0 };        
    double avg[3] = { 0.0 };   
    char credit[3];            

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            tot[i] += grade[i][j];
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
            int tempNum = num[i];
            num[i] = num[max_idx];
            num[max_idx] = tempNum;
            
            int tempTot = tot[i];
            tot[i] = tot[max_idx];
            tot[max_idx] = tempTot;
            
            double tempAvg = avg[i];
            avg[i] = avg[max_idx];
            avg[max_idx] = tempAvg;

            char tempCredit = credit[i];
            credit[i] = credit[max_idx];
            credit[max_idx] = tempCredit;

            for (k = 0; k < 3; k++) {
                int tempGrade = grade[i][k];
                grade[i][k] = grade[max_idx][k];
                grade[max_idx][k] = tempGrade;
            }
        }
    }

    printf("\n");
    printf("=========================================================\n");
    printf("                       성   적   표                      \n");
    printf("=========================================================\n");
    printf(" 순위   번호   국어   영어   수학    총점     평균    학점\n");

    for (i = 0; i < 3; i++) {
        printf("  %d등     %d번", i + 1, num[i]);
        for (j = 0; j < 3; j++) {
            printf("   %3d", grade[i][j]);
        }
        printf("   %3d   %6.2lf      %c\n", tot[i], avg[i], credit[i]);
    }
    printf("=========================================================\n");
}

int main()
{
    int i, j;
    int grade[3][3];

    for (i = 0; i < 3; i++) {
        printf("%d번째 학생의 국어, 영어, 수학 점수 입력 : ", i + 1);
        for (j = 0; j < 3; j++) {
            scanf("%d", &grade[i][j]);
        }
    }

    gradePrint(grade);

    return 0;
}