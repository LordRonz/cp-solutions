#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int t, n, s[1005];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &s[i]);
		}
		sort(s, s + n);
		int mn = 99999;
		for(int i = 1; i < n; ++i) {
			mn = min(mn, s[i] - s[i - 1]);
		}
		printf("%d\n", mn);
	}
	return 0;
}