#include <stdio.h>

int main() {

    char first,second,third,forth;
    scanf("%c%c%c%c",&first,&second,&third,&forth);

    if(first == 'E' && second == 'S') {
        printf("당신은 외향적인 성격을 가지고 있습니다.\n");
        printf("직관형입니다.\n");
    } else if(first == 'E' && second == 'N') {
        printf("당신은 외향적인 성격을 가지고 있습니다.\n");
        printf("감각형입니다.\n");
    } else if(first == 'I' && second == 'N') {
        printf("당신은 내향적인 성격을 가지고 있습니다.\n");
        printf("감각형입니다.\n");
    } else {
        printf("당신은 내향적인 성격을 가지고 있습니다.\n");
        printf("직관형입니다.\n");
    }

    if(third == 'F' && forth == 'J') {
        printf("감정적이고 사람 중심적으로 판단하는 감정형입니다.\n");
        printf("계획형입니다.\n");
    } else if(third == 'F' && forth == 'P') {
        printf("감정적이고 사람 중심적으로 판단하는 감정형입니다.\n");
        printf("즉흥적입니다.\n");
    } else if(third == 'T' && forth == 'P') {
        printf("논리적이고 객관적으로 판단하는 사고형입니다.\n");
        printf("즉흥적입니다.\n");
    } else {
        printf("논리적이고 객관적으로 판단하는 사고형입니다.\n");
        printf("계획형입니다.\n");
    }

    return 0;
}