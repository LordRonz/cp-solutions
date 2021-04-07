#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int a, b, t;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &a, &b);
		printf("%d\n", (int)pow(max(min(a, b) * 2, max(a, b)), 2));
	}
	return 0;
}