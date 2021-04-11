#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, n, a, b, c, d;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d %d %d", &n, &a, &b, &c, &d);
		if((a - b) * n <= c + d && (a + b) * n >= c - d) {
			puts("Yes");
		}
		else puts("No");
	}
	return 0;
}