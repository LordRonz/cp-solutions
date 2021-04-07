#include <stdio.h>

int main(void) {
    int n;
    scanf("%d", &n);
    if(n % 7 == 0 || n % 4 == 0 || n % 47 == 0 || n % 74 == 0 || n % 477 == 0) {
        printf("YES\n");
        return 0;
    }
    while(n > 0) {
        if(n % 10  == 7 || n % 10 == 4)
            n /= 10;
        else {
            printf("NO\n");
            return 0;
        }
    }
    printf("YES\n");
    return 0;
}