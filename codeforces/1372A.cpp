#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED

int main()
{
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0, j = 1; i < n; ++i) {
			printf("%d ", j);
			if(i & 1) j += 2;
		}
		puts("");
	}
	return 0;
}