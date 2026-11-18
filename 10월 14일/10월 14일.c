#include <stdio.h>
#include <math.h>

int main() {

    int n, k, q, i_0,i_1,i_2;

    scanf("%d", &n);

    if(n<1 || n > 1000000) {
        return 0;
    }

    for(int i = 1; i <= 6; i++) {
        if(n % (10*i) != 0) {
            i_1 = 0;
        } else {
            i_1 = 1;
            break;
        }
    }

    for(int i = 0; i < sqrt(500000); i++) {
        if(2*(i*i) == n) {
            i_0 = 1;
            break;
        } else {
            i_0 = 0;
        }
    }

    if(i_0 == 1 || i_1 == 1) {
        printf("YES");
    } else {
        printf("NO");
    }

    
    return 0;
}