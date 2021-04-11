#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int t, n, m;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &m);
		if(n == 1) {
			puts("0");
			continue;
		}
		if(n > 2) {
			printf("%d\n", m << 1);
		}
		else printf("%d\n", m);
	}
	return 0;
}