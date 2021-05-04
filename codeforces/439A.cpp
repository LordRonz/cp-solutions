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
	int n, d, t, tot = 0, res;
	scanf("%d %d", &n, &d);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &t);
		tot += t;
	}
	tot += (n - 1) * 10;
	if(tot > d) {
		puts("-1");
		return 0;
	}
	res = 2 * (n - 1) + (d - tot) / 5;
	printf("%d\n", res);
	return 0;
}