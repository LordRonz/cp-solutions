#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n, a, one, two;
	scanf("%d", &t);
	while(t--) {
		one = 0, two = 0;
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a);
			a & 1 ? ++one : ++two;
		}
		int a = 0, b = 0;
		a = 2 * (two >> 1);
		b = 2 * two - a;
		if(b == 0 || a == b) {
			puts(one & 1 ? "NO" : "YES");
			continue;
		}
		if(one >= 2) {
			puts((one - 2) & 1 ? "NO" : "YES");
		}
		else puts("NO");
	}
	return 0;
}