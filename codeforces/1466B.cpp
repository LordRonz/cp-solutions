#include <bits/stdc++.h>

using namespace std;
#define FOR(i, a, b) for(int i = a; i < b; ++i)
const int MAX_N = 1e5 + 1;

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