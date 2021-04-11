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
	int n, m, k, x[1005], res = 0;
	scanf("%d %d %d", &n, &m, &k);
	for(int i = 0; i <= m; ++i) {
		scanf("%d", &x[i]);
	}
	for(int i = 0; i < m; ++i) {
		int diff = x[i] ^ x[m];
		int cnt = __builtin_popcount(diff);
		if(cnt <= k) ++res;
	}
	printf("%d\n", res);
	return 0;
}