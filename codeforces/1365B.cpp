#include <bits/stdc++.h>

using namespace std;
#define FOR(i, a, b) for(int i = a; i < b; ++i)
//0xACCE97ED;

int main() {
	int t, n, a[505], b[505];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		bool zer = 0, one = 0, sorted = 1;
		FOR(i, 0, n) {
			scanf("%d", &a[i]);
		}
		FOR(i, 0, n) {
			scanf("%d", &b[i]);
			if(b[i] == 1) one = 1;
			else zer = 1;
		}
		FOR(i, 0, n - 1) {
			if(a[i] > a[i + 1]) {
				sorted = 0;
				break;
			}
		}
		puts((zer && one) || sorted ? "YES" : "NO");
	}
	return 0;
}