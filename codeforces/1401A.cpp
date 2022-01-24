#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n, k;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &k);
		if(n == k) {
			puts("0");
			continue;
		}
		if(k > n) {
			printf("%d\n", k - n);
			continue;
		}
		puts(!((k & 1) ^ (n & 1)) ? "0" : "1");
	}
	return 0;
}