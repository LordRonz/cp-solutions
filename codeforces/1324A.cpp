#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int t, n, a[105];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		bool poo = false;
		for(int i = 1; i < n; ++i) {
			if((a[i] - a[i - 1]) & 1) {
				poo = 1;
				break;
			}
		}
		puts(poo ? "NO" : "YES");
	}
	return 0;
}