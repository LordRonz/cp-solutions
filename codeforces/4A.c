#include <stdio.h>

int main(void) {
    int a = 0;
    scanf("%d", &a);
    a % 2 == 0 && (a / 2 % 2 == 0 || (a / 2 % 2 == 1 && a > 2)) ? printf("YES\n") : printf("NO\n");
	return 0;
}