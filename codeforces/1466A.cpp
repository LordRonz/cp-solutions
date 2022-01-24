#include <bits/stdc++.h>

using namespace std;

int main() {
	int t, n, x[53];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &x[i]);
		}
		set<int> res;
		for(int i = 0; i < n - 1; ++i) {
			for(int j = i + 1; j < n; ++j) {
				if(abs(x[i] - x[j]) != 0) {
					res.insert(abs(x[i] - x[j]));
				}
			}
		}
		printf("%ld\n", res.size());
	}
	return 0;
}