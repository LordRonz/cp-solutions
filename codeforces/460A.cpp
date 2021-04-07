#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int n, m, tot = 0;
	scanf("%d %d", &n, &m);
	for(int i = 1; ; ++i) {
		--n;
		if(n < 0) break;
		++tot;
		if(i % m == 0) ++n;
	}
	printf("%d\n", tot);
}