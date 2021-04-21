#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
typedef long long ll;
//0xACCE97ED;

int main() {
	ll t, n, m;
	char cell[105][105];
	scanf("%lld", &t);
	while(t--) {
		scanf("%lld %lld", &n, &m);
		for(int i = 0; i < n; ++i) {
			scanf("\n");
			for(int j = 0; j < m; ++j) {
				scanf("%c", &cell[i][j]);
			}
		}
		int i = n - 1, j = 0, res = 0;
		for(;j < m; ++j) {
			if(cell[i][j] == 'D') ++res;
		}
		for(i = 0, j = m - 1; i < n; ++i) {
			if(cell[i][j] == 'R') ++res;
		}
		printf("%d\n", res);
	}
	return 0;
}