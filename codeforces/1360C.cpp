#include <bits/stdc++.h>

using namespace std;
//0xACCE97ED

int main()
{
	int t, n, a[55];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		sort(a, a + n);
		bool odd = true;
		bool nxt = false;
		for(int i = 0; i < n; ++i) {
			if(a[i] & 1) odd ^= 1;
			if(i > 0 && a[i] == a[i - 1] + 1) nxt = true;
		}
		puts(odd || nxt ? "YES" : "NO");
	} 
	return 0;
}