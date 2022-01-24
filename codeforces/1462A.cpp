#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n, b[305];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &b[i]);
		}
		int l = 0, r = n - 1;
		while(l < r) {
			printf("%d ", b[l++]);
			printf("%d ", b[r--]);
		}
		if(n & 1)
			printf("%d\n", b[r]);
		else
			puts("");
	} 
	return 0;
}