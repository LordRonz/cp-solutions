#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define gcd __gcd
typedef pair<int, int> pii;
typedef long long ll;
typedef long double ld;
const int MAX_N = 1e5 + 1;
//0xACCE97ED;

int main() {
	int t, n, x[MAX_N];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		int prev = 0;
		FOR(i, 0, n) {
			scanf("%d", &x[i]);
			if(prev && (prev == x[i] || prev > x[i])) {
				++x[i];
			}
			prev = x[i];
		}
		int cnt = distance(x, unique(x, x + n));
		printf("%d\n", cnt);
	}
	return 0;
}