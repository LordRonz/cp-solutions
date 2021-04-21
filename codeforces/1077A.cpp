#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	long long t, a, b, k;
	scanf("%lld", &t);
	while(t--) {
		scanf("%lld %lld %lld", &a, &b, &k);
		printf("%lld\n", (k - k / 2) * a - k / 2 * b);
	}
	return 0;
}