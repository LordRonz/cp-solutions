#include <stdio.h>

int main(void) {
    int n, p, v, t;
    int res = 0;
    scanf("%d", &n);
    for(;n > 0; n--) {
        scanf("%d %d %d", &p, &v, &t);
        if(p + v + t > 1) ++res;
    }
    printf("%d\n", res);
}