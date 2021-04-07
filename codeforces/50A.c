#include <stdio.h>
#include <math.h>

int main(void) {
    int m, n;
    scanf("%d %d", &m, &n);
    printf("%d\n", (int)floor((m * (float)n) / 2));
}