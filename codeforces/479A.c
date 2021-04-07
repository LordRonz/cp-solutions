#include <stdio.h>

int main(void)
{
	int a, b, c, max = -1, t;
    scanf("%d %d %d", &a, &b, &c);
	t = a + b + c;
	max = t > max ? t : max;
	t = a * b * c;
	max = t > max ? t : max;
	t = (a + b) * c;
	max = t > max ? t : max;
	t = a * (b + c);
	max = t > max ? t : max;
	t = a + b * c;
	max = t > max ? t : max;
	printf("%d\n", max);
	return 0;
}