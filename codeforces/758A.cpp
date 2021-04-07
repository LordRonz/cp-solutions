#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int n, a[105], mx, tot = 0;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
		tot += a[i];
	}
	mx = *max_element(a, a + n);
	printf("%d\n", n * mx - tot);
	return 0;
}