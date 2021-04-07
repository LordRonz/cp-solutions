#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void) {
    unsigned int n, m, a;
	scanf("%u %u %u", &n, &m, &a);
	printf("%llu\n", (unsigned long long)(ceil(n / (long double)a) * ceil(m / (long double)a)));
}