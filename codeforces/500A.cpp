#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int t, n, a[30005];
	scanf("%d %d", &n, &t);
	--t;
	for(int i = 0; i < n - 1; ++i) {
		scanf("%d", &a[i]);
	}
	for(int i = 0; i <= n; i += a[i]) {
		if(i == t) {
			printf("YES\n");
			return 0;
		}
		if(i > t || i == n) break;
	}
	printf("NO\n");
	return 0;
}