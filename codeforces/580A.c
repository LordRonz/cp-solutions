#include <stdio.h>

int main(void)
{
    int n, a, prev = 0, max = 0, t = 0;
    scanf("%d", &n);
    while(n--) {
        scanf("%d", &a);
        if(a < prev) t = 1;
        else ++t;
        prev = a;
        max = max < t ? t : max;
    }
    printf("%d\n", max);
    return 0;
}