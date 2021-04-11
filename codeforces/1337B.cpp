#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, x, n, m;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d", &x, &n, &m);
		while(n-- && x >= 20) {
			x >>= 1;
			x += 10;
		}
		x -= 10 * m;
		x <= 0 ? puts("YES") : puts("NO");
	}
	return 0;
}