#include <stdio.h>

struct student
{
    char ids[20];
    char names[20];
    int kor;
    int eng;
    int mat;
    int total;
};


int main() {
    int i,n;

    scanf("%d", &n);
    struct student st[n];


    for (i = 0; i < n; i++) {
        printf("\n[%d번째 학생 정보 입력]\n", i + 1);
        printf("학번: ");
        scanf("%s",st[i].ids);
        printf("성명: ");
        scanf("%s",st[i].names);
        printf("국어 점수: ");
        scanf("%d", &st[i].kor);
        printf("영어 점수: ");
        scanf("%d", &st[i].eng);
        printf("수학 점수: ");
        scanf("%d", &st[i].mat);
    }
    
    printf("\n학번 성명 국어 영어 수학 총점 평균 \n");
    
    for (i = 0; i < n; i++) {
        st[i].total = st[i].kor + st[i].eng + st[i].mat;
        double avg = st[i].total / 3.0;
        printf("%-8s %-8s %-6d %-6d %-6d %-6d %-8.2f\n",
        st[i].ids, st[i].names, st[i].kor, st[i].eng, st[i].mat, st[i].total, avg);
    }
    
    return 0;
}