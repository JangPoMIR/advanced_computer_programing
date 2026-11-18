#include <stdio.h>

void initializeArray(int arr[], int size) {
    if(size >= 2) {
        arr[0] = 1;
        arr[1] = 2;
        printf("배열 초기화 완료: arr[0] = %d, arr[1] = %d\n", arr[0], arr[1]);
    } else {
        printf("배열 크기가 너무 작습니다.");
    }
} // 16번 문제, 매개변수 수정

void bubbleSort(int a[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
} // 버블정렬

void selectionSort(int a[], int n) {
    int temp;
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(a[i] > a[j]) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
} // 선택정렬

int main() {

    int a[5] = {0,};
    int b[10] = {0,};
    int n1 = sizeof(a) / sizeof(a[0]); // 배열 a 요소갯수
    int n2 = sizeof(b) / sizeof(b[0]); // 배열 b 요소갯수

    printf("버블 정렬 입력(5개)\n");
    for(int i = 0; i < n1; i++) {
        scanf(" %d", &a[i]);
    }

    printf("선택 정렬 입력(10개)\n");
    for(int i = 0; i < n2; i++) {
        scanf(" %d", &b[i]);
    }

    printf("버블 정렬\n");
    for(int i = 0; i < n1; i++) {
        printf("%d ", a[i]);
    } //초기값 출력
    printf("\n");

    bubbleSort(a, n1); //버블정렬

    for(int i = 0; i < n1; i++) {
        printf("%d ", a[i]);
    } //정렬된 값 출력
    printf("\n\n");

    printf("선택 정렬\n");
    for(int i = 0; i < n2; i++) {
        printf("%d ", b[i]);
    } //초기값 출력
    printf("\n");

    selectionSort(b, n2); // 선택정렬
    
    for(int i = 0; i < n2; i++) {
        printf("%d ", b[i]);
    } //정렬된 값 출력
    printf("\n");

    return 0;
}