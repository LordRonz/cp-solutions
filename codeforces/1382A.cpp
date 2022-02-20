#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED

int main()
{
	unsigned t, a[1005], b[1005], n, m, freq[1005];
	scanf("%u", &t);
	while(t--) {
		memset(freq, 0, sizeof(freq));
		scanf("%d %d", &n, &m);
		unsigned res = 0;
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
			++freq[a[i]];
		}
		for(int i = 0; i < m; ++i) {
			scanf("%d", &b[i]);
			if(freq[b[i]]) {
				res = b[i];
			}
		}
		if(res) {
			puts("YES");
			printf("1 %d\n", res);
		}
		else {
			puts("NO");
		}
	}
	return 0;
}