#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED;

int main() {
	int t, n, k, a[100005];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		k = 0;
		while(k < n && a[k] == 1) ++k;
		puts((k == n) ^ !(k & 1) ? "First" : "Second");
	}
	return 0;
}