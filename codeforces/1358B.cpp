#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int t, n, a[100005];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		int res = 1;
		int tmp = 0;
		sort(a, a + n);
		for(int i = 0; i < n; ++i) {
			if(a[i] <= res) {
				++res;
			}
			else if(a[i] <= res + tmp) {
				res += tmp + 1;
				tmp = 0;
			}
			else {
				++tmp;
			}
		}
		printf("%d\n", res);
	}
	return 0;
}