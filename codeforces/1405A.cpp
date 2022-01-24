#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n, p[105];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &p[i]);
		}
		for(int i = n - 1; i >= 0; --i) {
			printf("%d ", p[i]);
		}
		puts("");
	}
	return 0;
}