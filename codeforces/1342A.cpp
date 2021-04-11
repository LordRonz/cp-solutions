#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	long long t, a, b, x, y;
	scanf("%lld", &t);
	while(t--) {
		scanf("%lld %lld", &x, &y);
		scanf("%lld %lld", &a, &b);
		if(a << 1 < b || x * y <= 0) {
			printf("%lld\n", abs(x) * a + abs(y) * a);
			continue;
		}
		int t(min(abs(x), abs(y)));
		printf("%lld\n", t * b + (max(abs(x), abs(y)) - t) * a);
	}
	return 0;
}