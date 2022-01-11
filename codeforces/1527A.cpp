#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		int bit = 0;
		while(n) {
			n >>= 1;
			++bit;
		}
		--bit;
		printf("%d\n", (int)pow(2, bit) - 1);
	}
	return 0;
}