#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define gcd __gcd
typedef pair<int, int> pii;
typedef long long ll;
const int MAX_N = 1e5 + 1;
//0xACCE97ED;

int main() {
	int t, n, k;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &k);
		if(k == 1) {
			puts("1");
			continue;
		}
		if((k << 1) <= n) {
			puts(n % k == 0 ? "1" : "2");
			continue;
		}
        int r = (int)ceil(max(n, k) / float(min(n, k)));
		printf("%d\n", r);
	}
	return 0;
}