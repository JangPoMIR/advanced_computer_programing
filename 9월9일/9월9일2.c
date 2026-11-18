#include <stdio.h>

int main() {
    
    int a;
    char b;
    float c;

    printf("Type int: ");
    scanf("%d", &a);
    printf("Type char: ");
    scanf("%c", &b);
    printf("Type Float: ");
    scanf("%f", &c);

    printf("int: %d\n", a);
    printf("char: %c\n", b);
    printf("float: %f\n", c);
    
    return 0;
}