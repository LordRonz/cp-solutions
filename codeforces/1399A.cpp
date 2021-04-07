#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
//0xACCE97ED

int main()
{
	int t, n, a[110] = {};
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		if(n == 1) {
			printf("YES\n");
			continue;
		}
		sort(a, a + n);
		bool yes = true;
		for(int i = 0; i < n - 1; ++i) {
			yes = true;
			if(a[i] + 1 == a[i + 1] || a[i] == a[i + 1]) {
				a[i] = a[i + 1];
				}
		}
		for(int i = 0; i < n - 1; ++i) {
			if(a[i] != a[i + 1] && a[i] + 1 != a[i + 1]) {
				yes = false;
				break;
			}
		}
		if(yes) {
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	return 0;
}