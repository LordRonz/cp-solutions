#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int t, n, m, k;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d", &n, &m, &k);
		int tmp = n / k;
		int p1 = min(tmp, m);
		m -= p1;
		int p2 = ceil(m / (float)(k - 1));
		printf("%d\n", p1 - p2);
	}
	return 0;
}