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
	int t, n, x, w[105];
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &x);
		int res = 0;
		for(int i = 0; i < n; ++i) {
			scanf("%d", &w[i]);
			res += w[i];
		}
		if(res == x) {
			puts("NO");
			continue;
		}
		res = 0;
		sort(w, w + n);
		for(int i = 0; i < n; ++i) {
			if(res + w[i] == x) {
				swap(w[i], w[i + 1]);
			}
			res += w[i];
		}
		puts("YES");
		for(int i = 0; i < n; ++i) {
			printf("%d ", w[i]);
		}
		puts("");
	}
}