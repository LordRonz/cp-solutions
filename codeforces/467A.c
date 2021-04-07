#include <stdio.h>

int main(void) {
    unsigned int n, p, q, a = 0;
    scanf("%d\n", &n);
    while(n--) {
        scanf("%d %d", &p, &q);
        if(q > 1 && p < q - 1) ++a;
    }
    printf("%d\n", a);
    return 0;
}