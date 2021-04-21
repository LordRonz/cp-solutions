#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
typedef pair<int, int> pii;
//0xACCE97ED

int main()
{
	int d1, d2, d3, res;
	scanf("%d %d %d", &d1, &d2, &d3);
	res = min(d1, d2) + min(d1 + d2, d3) + min(max(d1, d2), d3 + min(d1, d2));
	printf("%d\n", res);
	return 0;
}