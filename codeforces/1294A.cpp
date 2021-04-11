#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))

typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, a, b, c, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d %d", &a, &b, &c, &n);
		n -= (MAX(a, b, c) - a) + (MAX(a, b, c) - b) + (MAX(a, b, c) - c);
		if(n >= 0 && n % 3 == 0) puts("YES");
		else puts("NO");
	}
	return 0;
}