#include <bits/stdc++.h>

using namespace std;

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