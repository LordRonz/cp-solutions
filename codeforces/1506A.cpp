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
	int t;
	ll n, m, x;
	scanf("%d", &t);
	while(t--) {
		scanf("%lld %lld %lld", &n, &m, &x);
		ll c = ceil(x / (float)n);
		ll r = n - (n * c - x);
		ll y = (r - 1) * m + c;
		printf("%lld\n", y);
	}
	return 0;
}