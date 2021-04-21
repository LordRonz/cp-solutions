#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int t, a, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		int prev = -1;
		int res = 1;
		int mx = 1;
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a);
			if(a == prev) {
				++res;
				mx = max(mx, res);
			}
			else res = 1;
			prev = a;
		}
		printf("%d\n", mx);
	}
	return 0;
}