#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
	int t, n, a[2005];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; ++i) {
			if(a[i] & 1) {
				printf("%d ", a[i]);
			}
		}
		for(int i = 0; i < n; ++i) {
			if(!(a[i] & 1)) {
				printf("%d ", a[i]);
			}
		}
		puts("");
	}
	return 0;
}