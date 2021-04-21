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
	ll a, b, c;
	scanf("%d", &t);
	while(t--) {
		scanf("%lld %lld %lld", &a, &b, &c);
		ll d = 0, e = 0;
		bool flag1 = 0, flag2 = 0;
		if(a >= c) {
			d = -1;
			e = b;
			flag1 = 1;
		}
		else if(a * b <= c) {
			e = -1;
			d = b - 1;
			flag2 = 1;
		}
		else {
			d = 1;
			e = b;
		}
		printf("%lld %lld\n", d, e);
	}
	return 0;
}