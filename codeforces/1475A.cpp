#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	long long unsigned n, t;
	scanf("%lld", &t);
	while(t--) {
		scanf("%lld", &n);
		if(n & 1) {
			puts("YES");
			continue;
		}
		long long unsigned div = 3;
		while(n > 1) {
			if(n & 1) {
				puts("YES");
				break;
			}
			n >>= 1;
		}
		if(n == 1) puts("NO");
	}
	return 0;
}