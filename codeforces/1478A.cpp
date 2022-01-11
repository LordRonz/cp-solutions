#include <bits/stdc++.h>

using namespace std;

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