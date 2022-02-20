#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED;

int main() {
	int t, n, w, cnt[55];
	scanf("%d", &t);
	while(t--) {
        scanf("%d", &n);
		memset(cnt, 0, sizeof(cnt));
		for(int i = 0; i < n; ++i) {
			scanf("%d", &w);
			++cnt[w];
		}
		int ans = 0;
		for (int s = 2; s <= 2 * n; ++s) {
			int cur = 0;
			for (int i = 1; i < (s + 1) / 2; ++i) {
				if (s - i > n) continue;
				cur += min(cnt[i], cnt[s - i]);
			}
			if (s % 2 == 0) cur += cnt[s / 2] / 2;
			ans = max(ans, cur);
		}
		printf("%d\n", ans);
	}
	return 0;
}