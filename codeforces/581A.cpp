#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int a, b, t;
	scanf("%d %d", &a, &b);
	t = min(a, b);
	a -= t;
	b -= t;
	printf("%d %d\n", t, max(a, b) / 2);
	return 0;
}