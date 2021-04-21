#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int t, n, a[200005], b[200005][2] = {};
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		memset(b, 0, sizeof(b));
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
			++b[a[i]][0];
			b[a[i]][1] = i + 1;
		}
		bool gotcha = 0;
		for(int i = 1; i <= n; ++i) {
			if(b[i][0] == 1) {
				printf("%d\n", b[i][1]);
				gotcha = 1;
				break;
			}
		}
		if(gotcha) continue;
		puts("-1");
	}
	return 0;
}