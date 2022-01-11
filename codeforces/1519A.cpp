#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
	int t, r, b, d;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d", &r, &b, &d);
		int mx = max(r, b), mn = min(r, b);
		int a = mx / mn + (mx % mn ? 1 : 0);
		int dif = abs(a - 1);
		puts(dif > d ? "NO": "YES");
	}
	return 0;
}