#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	int l = 0, r = n;
	k = 240 - k;
	while(l < r) {
		int m = l + (r - l) / 2;
		int s = m * (5 + 5 * m) / 2;
		if(s == k) {
			printf("%d\n", m);
			return 0;
		}
		if(s < k && (m + 1) * (5 + 5 * (m + 1)) / 2 > k) {
			printf("%d\n", m);
			return 0;
		}
		if(s < k) {
			l = m + 1;
		}
		else {
			r = m - 1;
		}
	}
	printf("%d\n", l);
	return 0;
}