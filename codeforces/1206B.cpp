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
	int n, a, neg = 0, zer = 0;
	ll cost = 0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &a);
		if(a == 0) ++zer;
		else if(a > 0) {
			cost += a - 1;
		}
		else {
			++neg;
			cost += (-1 - a);
		}
	}
	cost += zer;
	if(neg & 1) {
		if(!zer) {
			cost += 2;
		}
	}
	printf("%lld\n", cost);
	return 0;
}