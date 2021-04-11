#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))

typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int t, n, m;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &m);
		printf("%d\n", (int)ceil(n * m / 2.0));
	}
	return 0;
}