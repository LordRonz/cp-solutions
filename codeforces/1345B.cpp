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
	int t, n, dp[30000] = {};
	scanf("%d", &t);
	for(long i = 0, j = 2, k = 2; i < 30000; ++i, k += 3, j += k) {
		dp[i] = j;
	}
	while(t--) {
		scanf("%d", &n);
		int res = 0;
		while(n > 1) {
			int upper = upper_bound(dp, dp + 30000, n) - dp;
			n -= upper - 1 >= 0 ? dp[upper - 1] : 2;
			++res;
		}
		printf("%d\n", res);
	}
	// for(int i = 0; i < 10; ++i) {
	// 	printf("%d ", dp[i]);
	// }
	// puts("");
	return 0;
}