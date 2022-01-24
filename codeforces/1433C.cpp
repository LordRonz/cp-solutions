#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n, a[300005];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		int ans = -1;
		int dom = 0;
		int mx = -1;
		for(int i = 0; i < n; ++i) {
			if(a[i] > dom && ((i > 0 && a[i] > a[i - 1]) || (i + 1 < n && a[i] > a[i + 1]))) {
				dom = a[i];
				mx = i;
			}
		}
		if(mx == -1) {
			puts("-1");
			continue;
		}
		printf("%d\n", mx + 1);
	}
	return 0;
}