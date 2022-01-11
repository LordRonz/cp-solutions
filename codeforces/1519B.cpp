
#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
	int t, n, m, k;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d", &n, &m, &k);
		int a = min(n, m) - 1;
		int b = min(n, m) * (max(n, m) - 1);
		puts((a + b) == k ? "YES" : "NO");
	}
	return 0;
}