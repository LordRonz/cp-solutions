#include <stdio.h>

int main(void) {
    int x, y, z, n;
    int sumx = 0, sumy = 0, sumz = 0;
    scanf("%d", &n);
    while(n--) {
        scanf("%d %d %d", &x, &y, &z);
        sumx += x;
        sumy += y;
        sumz += z;
    }
    sumx == 0 && sumy == 0 && sumz == 0 ? printf("YES\n") : printf("NO\n");
}