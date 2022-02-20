#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED

int main()
{
	int a[55], b[55], t, n;
	long long res;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		for(int i = 0; i < n; ++i) {
			scanf("%d", &b[i]);
		}
		int c = *min_element(a, a + n);
		int d = *min_element(b, b + n);
		res = 0;
		for(int i = 0; i < n; ++i) {
			res += max(a[i] - c, b[i] - d);
		}
		printf("%lld\n", res);
	}
	return 0;
}