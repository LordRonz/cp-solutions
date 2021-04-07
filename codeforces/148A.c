#include <stdio.h>

int main(void)
{
	int k, l, m, n, d, i, j;
	scanf("%d %d %d %d %d", &k, &l, &m, &n, &d);
	if(k == 1 || l == 1 || m == 1 || n == 1) {
		printf("%d\n", d);
		return 0;
	}
	for(i = 0, j = d; i <= j; ++i) {
		if(i % k == 0 || i % l == 0 || i % m == 0 || i % n == 0) continue;
		--d;
	}
	printf("%d\n", d);
	return 0;
}