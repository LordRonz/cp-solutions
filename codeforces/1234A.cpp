#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int q, n, a, sm;
	scanf("%d", &q);
	while(q--) {
		sm = 0;
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a);
			sm += a;
		}
		printf("%d\n", (int)ceil(sm / (float)n));
	}
	return 0;
}