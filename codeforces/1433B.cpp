#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n;
	bool a[55];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		int first = -1, last = -1, tmp;
		for(int i = 0; i < n; ++i) {
			scanf("%d", &tmp);
			a[i] = tmp;
			if(first == -1 && a[i]) {
				first = i;
			}
		}
		for(last = n - 1; last >= first; --last) {
			if(a[last]) break;
		}
		if(last == first) {
			puts("0");
			continue;
		}
		tmp = 0;
		for(int i = first; i < last; ++i) {
			if(!a[i]) ++tmp;
		}
		printf("%d\n", tmp);
	}
	return 0;
}