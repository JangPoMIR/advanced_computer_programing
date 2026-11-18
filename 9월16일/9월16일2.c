#include <stdio.h>

int main() {
    int dis, sp;
    float timemin,timesec;
    printf("distance(km), speed: ");
    scanf("%d %d", &dis,&sp);

    timesec = (dis/sp) * 3600;
    timemin = timesec%600;

    printf("time : %fh %fm %fs", timesec/3600, timemin, timemin );

    return 0;
}