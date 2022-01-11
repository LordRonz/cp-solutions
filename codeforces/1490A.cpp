#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
	int t, n, a[55];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		int res = 0;
		for(int i = 0; i < n - 1; ++i) {
			int b = min(a[i], a[i + 1]) * 2;
			int c = max(a[i], a[i + 1]);
			while(b < c) {
				b <<= 1;
				++res;
			}
		}
		printf("%d\n", res);
	}
	return 0;
}