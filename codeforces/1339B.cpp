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
	int t, n, a[MAX_N];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		sort(a, a + n);
		int mid = (n - 1) >> 1;
		int l = mid;
		int r = mid + 1;
		bool ltrn = 1;
		while(l >= 0 || r < n) {
			int ind = ltrn ? l : r;
			printf("%d ", a[ind]);
			ltrn ? --l : ++r;
			ltrn = !ltrn;
		}
		puts("");
	}
	return 0;
}