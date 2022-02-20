#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED;

int main() {
	int t, n, k;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &k);
		if(k >= n) {
			puts("1");
			continue;
		}
		int ans = n;
		for(int i = 1; i * i <= n; ++i) {
			if(n % i == 0) {
				if(i <= k) {
					ans = min(ans, n / i);
				}
				if(n / i <= k) {
					ans = min(ans, i);
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}