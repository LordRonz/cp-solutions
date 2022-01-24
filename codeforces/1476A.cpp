#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n, k;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &k);
		if(k == 1) {
			puts("1");
			continue;
		}
		if((k << 1) <= n) {
			puts(n % k == 0 ? "1" : "2");
			continue;
		}
        int r = (int)ceil(max(n, k) / float(min(n, k)));
		printf("%d\n", r);
	}
	return 0;
}