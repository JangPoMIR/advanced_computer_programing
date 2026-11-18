#include <stdio.h>
#include <stdlib.h>
#include <time.h>

short *getLottoNumbers() {
    short *LottoNumbers = malloc(sizeof(short *) * 7);;

    for(int i = 0; i < 7; i++) {
        LottoNumbers[i] = rand() % (45 - 1 + 1) + 1;
    }

    return LottoNumbers;
}

int main() {
    
    srand((unsigned int)time(NULL));
    
    int dotimes;
    short *numbers;

    scanf("%d", &dotimes);

    for(int i = 0; i < dotimes; i++) {
        numbers = getLottoNumbers();
        for(int j = 0; j < 7; j++) {
            if(j == 6) {
                printf("+ ");
            }
            printf("%d ", numbers[j]);
        }
        printf("\n");
        free(numbers);
    }
    return 0;
}