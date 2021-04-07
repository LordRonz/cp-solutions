#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	long long t, n, a, bad0, bad1;
	scanf("%lld", &t);
	while(t--) {
		bad0 = 0, bad1 = 0;
		scanf("%lld", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%lld", &a);
			if(i % 2 != a % 2) {
				if(i & 1) {
				++bad0;
				}
				else ++bad1;
			}
		}
		if(bad0 == bad1) {
			printf("%lld\n", bad0);
		}
		else printf("-1\n");
	}
	return 0;
}