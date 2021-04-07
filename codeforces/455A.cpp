#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int n, j;
	long long a[100005] = {}, dp[100005] = {};
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &j), ++a[j];
	}
	dp[0] = 0;
	dp[1] = a[1];
	for(int i = 2; i < 100001; ++i) {
		dp[i] = max(dp[i - 1], dp[i - 2] + i * a[i]);
	}
	printf("%lli\n", dp[100000]);
	return 0;
}