#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int n, m, a, b;
	scanf("%d %d %d %d", &n, &m, &a, &b);
	if(1.0 / a >= (double)m / b) {
		printf("%d\n", n * a);
		return 0;
	}
	printf("%d\n", n / m * b + (((n % m) * a) < b ? (n % m) * a : b));
	return 0;
}