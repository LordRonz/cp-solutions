#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED;

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		int tot8 = ceil(n / 4.f);
		for(int i = 0; i < n - tot8; ++i) {
			printf("9");
		}
		for(int i = 0; i < tot8; ++i) {
			printf("8");
		}
		puts("");
	}
	return 0;
}