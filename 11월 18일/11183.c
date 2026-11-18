#include <stdio.h>
#include <stdlib.h>

struct student {
    char ids[20];
    char names[20];
    int scores[3];
    int total;
    double avg;
};

void input_grade(int n, struct student *stu) {
    for (int i = 0; i < n; i++) {
        printf("\n[%d번째 학생 정보 입력]\n", i + 1);
        printf("학번: ");
        scanf("%s", (stu+i)->ids);
        printf("성명: ");
        scanf("%s", (stu+i)->names);
        printf("국어 점수: ");
        scanf("%d", ((stu+i)->scores+0));
        printf("영어 점수: ");
        scanf("%d", ((stu+i)->scores+1));
        printf("수학 점수: ");
        scanf("%d", ((stu+i)->scores+2));
    }
}

void calculate_grade(int n, struct student *stu) {
    for (int i = 0; i < n; i++) {
        (stu+i)->total = *((stu+i)->scores+0) + *((stu+i)->scores+1) + *((stu+i)->scores+2);
        (stu+i)->avg = (stu+i)->total / 3.0;
    }
}

void output_grade(int n, struct student *stu) {
    printf("\n학번 성명 국어 영어 수학 총점 평균 \n");
    for (int i = 0; i < n; i++) {
        printf("%s %s %d %d %d %d %.2f\n",
        (stu+i)->ids, (stu+i)->names, *((stu+i)->scores+0), *((stu+i)->scores+1), *((stu+i)->scores+2), (stu+i)->total, (stu+i)->avg);
    }
}

int main() {
    int n;
    printf("학생 수를 입력하시오: ");
    scanf("%d", &n);

    struct student *stu = (struct student *)malloc(sizeof(struct student) * n);

    if (stu == NULL) {
        printf("동적 할당 실패!");
        return 1;
    }

    input_grade(n,stu);
    calculate_grade(n,stu);
    output_grade(n,stu);

    free(stu);

    return 0;
}   