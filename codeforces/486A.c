#include <stdio.h>

int main(void)
{
	long long n, res;
    scanf("%lld", &n);
	res = (n + 1) / 2;
	if(n & 1) res *= -1; 
	printf("%lld\n", res);
	return 0;
}