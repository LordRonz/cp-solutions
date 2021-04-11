#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		n & 3 ? puts("NO") : puts("YES");
	}
	return 0;
}