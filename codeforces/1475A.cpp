#include <bits/stdc++.h>

using namespace std;

int main() {
	long long unsigned n, t;
	scanf("%lld", &t);
	while(t--) {
		scanf("%lld", &n);
		if(n & 1) {
			puts("YES");
			continue;
		}
		long long unsigned div = 3;
		while(n > 1) {
			if(n & 1) {
				puts("YES");
				break;
			}
			n >>= 1;
		}
		if(n == 1) puts("NO");
	}
	return 0;
}