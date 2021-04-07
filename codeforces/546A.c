#include <stdio.h>

int main(void) {
    int k, n, w, total = 0;
    scanf("%d %d %d", &k, &n, &w);
    ++w;
    while(w--) {
        total += k * w;
    }
    printf("%d\n", total > n ? total - n : 0);
    return 0;
}