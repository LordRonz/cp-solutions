#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	long long t, x, y, n;
	scanf("%lld", &t);
	while(t--) {
		scanf("%lld %lld %lld", &x, &y, &n);
		if(n % x > y) {
			printf("%lld\n", n - (n % x - y));
		}
		else if(n % x < y) {
			printf("%lld\n", n - (n % x + x - y));
		}
		else {
			printf("%lld\n", n);
		}
	}
	return 0;
}