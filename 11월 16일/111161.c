#include <stdio.h>
#include <stdlib.h>

int main() {
    int i, n;
    printf("학생 수를 입력하세요: ");
    scanf("%d", &n);

    char *ids = (char *)malloc(sizeof(char) * n * 20);
    char *names = (char *)malloc(sizeof(char) * n * 20);
    int *scores = (int *)malloc(sizeof(int) * n * 3);

    if(ids == NULL || names == NULL || scores == NULL ) {
        printf("메모리 할당 실패!");
        free(ids);
        free(names);
        free(scores);
        return 1;
    }

    for (i = 0; i < n; i++) {
        printf("\n[%d번째 학생 정보 입력]\n", i + 1);
        printf("학번: ");
        scanf("%s", &ids[i * 20]); 
        printf("성명: ");
        scanf("%s", &names[i * 20]);
        printf("국어 점수: ");
        scanf("%d", &scores[i*3]);
        printf("영어 점수: ");
        scanf("%d", &scores[i*3+1]);
        printf("수학 점수: ");
        scanf("%d", &scores[i*3+2]);
    }
    
    printf("\n학번 성명 국어 영어 수학 총점 평균 \n");

    for (i = 0; i < n; i++) {
        int kor = scores[i*3];
        int eng = scores[i*3+1];
        int mat = scores[i*3+2];
        int total = kor + eng + mat;
        double avg = total / 3.0;
        printf("%-8s %-8s %-6d %-6d %-6d %-6d %-8.2f\n", &ids[i * 20], &names[i * 20], kor, eng, mat, total, avg);
    }
    

    free(ids);
    free(names);
    free(scores);
    return 0;
}