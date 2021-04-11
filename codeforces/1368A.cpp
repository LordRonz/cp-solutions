#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
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