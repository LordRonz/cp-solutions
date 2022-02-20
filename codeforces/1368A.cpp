#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED

int main()
{
	unsigned long long t, a, b, n;
	scanf("%llu", &t);
	while(t--) {
		scanf("%llu %llu %llu", &a, &b, &n);
		unsigned cnt = 0;
		while(a <= n && b <= n) {
			if(a > b) {
				b += a;
			}
			else {
				a += b;
			}
			++cnt;
		}
		printf("%d\n", cnt);
	}
	return 0;
}