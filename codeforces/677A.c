#include <stdio.h>

int main(void) {
    int n, h, a, min;
    scanf("%d %d", &n, &h);
    min = n;
    while(n--) {
        scanf("%d", &a);
        if(a > h) ++min;
    }
    printf("%d\n", min);
    return 0;
}