#include <bits/stdc++.h>

using namespace std;

//0xACCE97ED;

int main() {
    int t, a, b, c, d;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d %d", &a, &b, &c, &d);
        int mxa = max(a, b), mna = min(a, b), mxc = max(c, d), mnc = min(c, d);
        puts(mxa > mna && mxa > mnc && mxc > mna && mxc > mnc ? "YES" : "NO");
	}
	return 0;
}