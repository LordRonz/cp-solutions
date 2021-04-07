#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int t, n, k, a[35], b[35];
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &k);
		for(int i = 0; i < n; ++i) scanf("%d", &a[i]);
		for(int i = 0; i < n; ++i) scanf("%d", &b[i]);
		sort(a, a + n), sort(b, b + n);
		for(int i = 0; i < k; ++i) {
			if(a[i] < b[n - i - 1]) {
				a[i] = b[n - i - 1];
			}
			else break;
		}
		printf("%d\n", accumulate(a, a + n, 0));
	}
	return 0;
}