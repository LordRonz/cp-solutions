#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int a, b, c, x[4];
	scanf("%d %d %d %d", &x[0], &x[1], &x[2], &x[3]);
	sort(x, x + 4);
	a = (x[0] + x[1] - x[2]) / 2;
	b = x[0] - a;
	c = x[2] - b;
	printf("%d %d %d\n", a, b, c);
	return 0;
}