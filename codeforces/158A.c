#include <stdio.h>

int main(void) {
    int n, k, a, i;
    int res = 0, temp;
    scanf("%d %d", &n, &k);
    for(i = 0; i < n; ++i) {
        scanf("%d", &a);
        if(a <= 0) break;
        if(i == k - 1) temp = a;
        if(temp > a) {
            break;
        }
    }
    res = i;
    printf("%d\n", res);
}