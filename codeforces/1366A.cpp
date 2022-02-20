#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED;

int main() {
	int t, a, b;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &a, &b);
		int tot = 0;
		int tmp;
		while(a > 0 && b > 0) {
			if(a == 1 && b == 1) break;
			if(a > b) {
				tmp = min(b, (a - b));
				b -= tmp;
				a -= tmp << 1;
				tot += tmp;
			}
			else if(b > a) {
				tmp = min(a, (b - a));
				a -= tmp;
				b -= tmp << 1;
				tot += tmp;
			}
			else {
				tmp = a / 3;
				a -= tmp * 3;
				b -= tmp * 3;
				tot += tmp << 1;
				if(a > 1 && b > 1) {
					++tot;
					a -= 2, b--;
				}
			}
		}
		printf("%d\n", tot);
	}
	return 0;
}