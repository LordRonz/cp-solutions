#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int m, l, r, k = 0;
	char c[100005];
	int dp[100005] {};
	scanf("%s", c);
	for(int i = 1, j = strlen(c); i < j; ++i) {
		if(c[i] == c[i - 1]) {
			++k;
		}
		dp[i] = k;
	}
	scanf("%d", &m);

	while(m--) {
		scanf("%d %d", &l, &r);
		printf("%d\n", dp[r - 1] - dp[l - 1]);
	}
	return 0;
}