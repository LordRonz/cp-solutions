#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int t, n, m, x, y;
	char s[105][1005];
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d %d", &n, &m, &x, &y);
		for(int i = 0; i < n; ++i) {
			scanf("\n");
			for(int j = 0; j < m; ++j) {
				scanf("%c", &s[i][j]);
			}
		}
		int tile = 0, ttile = 0;
		bool jump = 0;
		for(int i = 0; i < n; ++i) {
			jump = 0;
			for(int j = 0; j < m; ++j) {
				if(s[i][j] == '.') {
					++tile;
					if(!jump && j + 1 < m && s[i][j + 1] == '.') {
						++ttile;
						jump = 1;
					}
					else if(jump && j + 1 < m && s[i][j + 1] == '.') {
						jump = 0;
					}
				}
				else jump = 0;
			}
		}
		if(x * 2 <= y) {
			printf("%d\n", tile * x);
			continue;
		}
		tile -= ttile * 2;
		printf("%d\n", tile * x + ttile * y);
	}
	return 0;
}