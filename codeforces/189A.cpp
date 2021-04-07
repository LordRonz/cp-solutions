#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED
 
int main()
{
	int n, a, b, c, dp[4001] = {}, x, y, z;
    scanf("%d %d %d %d", &n, &a, &b, &c);
	for(int i = 1; i <= n; ++i) {
		x = y = z = -1;
		if(i >= a) {
			x = dp[i - a];
		}
		if(i >= b) {
			y = dp[i - b];
		}
		if(i >= c) {
			z = dp[i - c];
		}
		if(x == -1 && y == -1 && z == -1)
			dp[i] = -1;
		else
			dp[i] = max(x, max(y, z)) + 1;
	}
	printf("%d\n", dp[n]);
	return 0;
}