#include <stdio.h>

int main(void) {
    int a, b, n, max = 0, cap = 0;
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d", &a, &b);
        cap -= a;
        cap += b;
        max = cap > max ? cap : max;
    }
    printf("%d\n", max);
    return 0;
}