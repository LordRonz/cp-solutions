#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int n, k;
	scanf("%d", &n);
	printf("%d\n", n / 2);
	for(int i = 1; i < n / 2; ++i) {
		fputs("2 ", stdout);
	}
	if(n & 1) puts("3");
	else puts("2");
	return 0;
}