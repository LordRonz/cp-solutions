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
	int n, b, mx = 0, prev = 0;
	scanf("%d", &n);
	FOR(i, 0, n) {
		scanf("%d", &b);
		mx = max(prev, mx);
		printf("%d ", b + mx);
		prev = b + mx;
	}
	puts("");
	return 0;
}