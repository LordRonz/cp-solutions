#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, n, ans = 0;
	scanf("%d %d", &n, &t);
	vector<int> a(n + 1);
	a[0] = 0;
	for(int i = 1; i <= n; ++i) {
		scanf("%d", &a[i]);
		a[i] += a[i - 1];
	}
	if(n == 1) {
		puts(a[1] <= t ? "1" : "0");
		return 0;
	}
	for(int i = 1; i <= n; ++i)
	{
		if(a[i] - a[i - 1] > t) continue;
		int l = i, r = n;
		while(l < r)
		{
			int mid = (l + r) >> 1;
			if(a[++mid] - a[i - 1] <= t) l = mid;
			else r = mid - 1;
		}
		ans = max(ans, l - i + 1);
	}
	printf("%d\n", ans);
	return 0;
}