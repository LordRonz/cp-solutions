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
	int t, n, r;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		int res = 0;
		while(n--) {
			scanf("%d", &r);
			r & 1 ? ++res : res;
		}
		printf("%d\n", res);
	}
}