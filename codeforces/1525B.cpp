#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
	int t, n, a[55];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		int mn = INT_MAX, mx = INT_MIN;
		bool sorted = 1;
		for(int i = 0; i < n; ++i) {
			if(sorted && i > 0 && a[i] < a[i - 1]) {
				sorted = 0;
			}
			mn = min(a[i], mn);
			mx = max(a[i], mx);
		}
		if(sorted) {
			puts("0");
			continue;
		}
		if(mx == a[n - 1] || mn == a[0]) {
			puts("1");
		}
		else if(mx == a[0] && mn == a[n - 1]){
			puts("3");
		}
		else {
			puts("2");
		}
	}
	return 0;
}