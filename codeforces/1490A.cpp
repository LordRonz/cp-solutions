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
	int t, n, a[55];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		int res = 0;
		for(int i = 0; i < n - 1; ++i) {
			int b = min(a[i], a[i + 1]) * 2;
			int c = max(a[i], a[i + 1]);
			while(b < c) {
				b <<= 1;
				++res;
			}
		}
		printf("%d\n", res);
	}
	return 0;
}