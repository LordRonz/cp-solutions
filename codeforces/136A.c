#include <stdio.h>

int main(void) {
    int n, i, p[105], s[105];
    scanf("%d", &n);
    for(i = 1; i <= n; ++i) {
        scanf("%d", &s[i]);
        p[s[i]] = i;
    }
    for(i = 1; i <= n; ++i) {
        printf("%d ", p[i]);
    }
    printf("\n");
    return 0;
}