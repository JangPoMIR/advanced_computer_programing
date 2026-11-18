#include <stdio.h>
#define PI 3.14

int main() {
    int radius;
    int a;
    int b;


    scanf("%d", &radius);
    scanf("%d", &a);
    scanf("%d", &b);

    printf("The area of the circle: %f\n", PI * radius * radius);
    printf("The line scale of the circle: %f\n", 2 * PI * radius);
    


    float c = (float)a/b;

    printf("%f",c);

    return 0;
}