#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int a, b, u = 0, res = 0;
	scanf("%d %d", &a, &b);
	while(a > 0) {
		++res;
		--a;
		++u;
		if(u == b) ++a, u = 0;
	}
	printf("%d\n", res);
	return 0;
}