#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    char phone[15];
    char gender[2];
    int score;
};


int main() {

    struct student s1;

    strcpy(s1.name,"홍길동");
    strcpy(s1.phone,"010-1111-0000");
    strcpy(s1.gender, "M");
    s1.score = 100;

    // struct student st1 = {
    //     "고길동",
    //     "010-1234-0000",
    //     "FM",
    //     100
    // };

    printf("%s %s %s %d\n", s1.name, s1.phone, s1.gender, s1.score);
    // printf("%s %s %s %d\n", st1.name, st1.phone, st1.gender, st1.score);
    

    return 0;
}