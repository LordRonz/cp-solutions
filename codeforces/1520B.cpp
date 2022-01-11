#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		int a = 1;
		int tot = 0;
		while(1) {
			int b = n / a;
			if(!b) break;
			tot += min(b, 9);
			a *= 10;
			++a;
		}
		printf("%d\n", tot);
	}
	return 0;
}