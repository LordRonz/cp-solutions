#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
typedef pair<int, int> pii;
typedef long long ll;
//0xACCE97ED;

int main() {
	int t, n, m;
	int cell[55][55];
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &m);
		int playRow = 0, playCol = 0;
		FOR(i, 0, n) {
			bool row1 = 0;
			FOR(j, 0, m) {
				scanf("%d", &cell[i][j]);
				if(cell[i][j]) row1 = 1;
			}
			if(row1) ++playRow;
		}
		FOR(j, 0, m) {
			bool col1 = 0;
			FOR(i, 0, n) {
				if(cell[i][j]) col1 = 1;
			}
			if(col1) ++playCol;
		}
		int playable = min((n - playRow), (m - playCol));
		puts(playable & 1 ? "Ashish" : "Vivek");
	}
	return 0;
}