#include <stdio.h>

int main(void) {
    int a, b, year = 0;
    scanf("%d %d", &a, &b);
    while(a <= b) {
        a *= 3;
        b *= 2;
        ++year;
    }
    printf("%d\n", year);
    return 0;
}