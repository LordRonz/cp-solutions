#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
	int t, n, r;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		int res = 0;
		while(n--) {
			scanf("%d", &r);
			r & 1 ? ++res : res;
		}
		printf("%d\n", res);
	}
}