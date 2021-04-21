#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int t, n, m;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &m);
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j < m; ++j) {
				printf("%c", !i && !j ? 'W': 'B');
			}
			puts("");
		}
	}
	return 0;
}