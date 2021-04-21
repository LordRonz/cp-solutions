#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define gcd __gcd
typedef pair<int, int> pii;
typedef long long ll;
const int MAX_N = 1e5 + 1;
//0xACCE97ED;

int main() {
	ll t, n, x, a[MAX_N];
	scanf("%lld", &t);
	while(t--) {
		scanf("%lld %lld", &n, &x);
		for(int i = 0; i < n; ++i) {
			scanf("%lld", &a[i]);
		}
		sort(a, a + n, greater<>());
		ll i = 0;
		ll sum = 0;
		for(; i < n; ++i) {
			sum += a[i];
			if(sum / (i + 1) < x) {
				break;
			}
		}
		printf("%lld\n", i);
	}
	return 0;
}