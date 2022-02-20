#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED

int main()
{
	int t, n, x, a, od = 0, ev = 0;
	scanf("%d", &t);
	while(t--) {
		od = 0, ev = 0;
		scanf("%d %d", &n, &x);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a);
			a & 1 ? ++od : ++ev;
		}
		if(od <= 0) {
			puts("No");
			continue;
		}
		if(n == x) {
			puts(od & 1 ? "Yes" : "No");
			continue;
		}
		int diff = x - min(ev, x - 1);
		if(diff & 1) {
			puts(od >= diff ? "Yes" : "No");
		}
		else {
			puts(od > diff && x != diff ? "Yes" : "No");
		}
	}
	return 0;
}