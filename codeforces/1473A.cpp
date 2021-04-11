#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, n, d, a[105];
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &d);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		sort(a, a + n);
		if(a[0] + a[1] <= d || a[n - 1] <= d) {
			puts("YES");
		}
		else puts("NO");
	}
	return 0;
}