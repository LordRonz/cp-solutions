#include <stdio.h>

int main(void)
{
	unsigned long long n, k, val, p;
    scanf("%llu %llu", &n, &k);
	p = (n + 1) / 2;
	if(k <= p)
		val = k * 2 - 1;
	else
		val = (k - p) * 2;
	printf("%llu\n", val);
	return 0;
}