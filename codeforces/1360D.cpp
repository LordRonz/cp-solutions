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
	int t, n, k;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &k);
		if(k >= n) {
			puts("1");
			continue;
		}
		int ans = n;
		for(int i = 1; i * i <= n; ++i) {
			if(n % i == 0) {
				if(i <= k) {
					ans = min(ans, n / i);
				}
				if(n / i <= k) {
					ans = min(ans, i);
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}