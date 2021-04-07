#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int t, a, b;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &a, &b);
		printf("%d\n", (int)ceil(abs(a - b) / 10.0));
	}
	return 0;
}