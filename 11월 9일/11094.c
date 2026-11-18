#include <stdio.h>
#include <string.h>

struct student
{
    char ids[20];
    char names[20];
    int kor;
    int eng;
    int mat;
    int total;
};

void input_student(int n, struct student *s) {

    for (int i = 0; i < n; i++) {
        printf("\n[%d번째 학생 정보 입력]\n", i + 1);
        printf("학번: ");
        scanf("%s",(s+i)->ids);
        printf("성명: ");
        scanf("%s",(s+i)->names);
        printf("국어 점수: ");
        scanf("%d", &(s+i)->kor);
        printf("영어 점수: ");
        scanf("%d", &(s+i)->eng);
        printf("수학 점수: ");
        scanf("%d", &(s+i)->mat);
    }
}


void getGrade(int n, struct student *s) {
    printf("\n학번 성명 국어 영어 수학 총점 평균 \n");
    
    for (int i = 0; i < n; i++) {
        (s+i)->total = (s+i)->kor + (s+i)->eng + (s+i)->mat;
        double avg = (s+i)->total / 3.0;
        printf("%-8s %-8s %-6d %-6d %-6d %-6d %-8.2f\n",
        (s+i)->ids, (s+i)->names, (s+i)->kor, (s+i)->eng, (s+i)->mat, (s+i)->total, avg);
    }
}

int main() {

    int n;
    printf("학생 수를 입력하시오: ");
    scanf("%d", &n);
    struct student st[n];

    int *s = st;

    input_student(n, s);
    getGrade(n, s);
    
    return 0;
}