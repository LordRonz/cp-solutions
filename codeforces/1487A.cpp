#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
	int t, n, a[105];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		sort(a, a + n);
		int b = a[0];
		int i = 0;
		for(i = 0; i < n && a[i] == b; ++i);
		printf("%d\n", n - i);
	}
	return 0;
}