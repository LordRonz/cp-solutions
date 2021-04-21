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
	int n, k, b[505], tot = 0;
	scanf("%d %d", &n, &k);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &b[i]);
	}
	for(int i = 1; i < n; ++i) {
		int sm = b[i - 1] + b[i];
		if(sm < k) {
			b[i] = k - b[i - 1];
			tot += k - sm;
		}
	}
	printf("%d\n", tot);
	for(int i = 0; i < n; ++i) {
		printf("%d ", b[i]);
	}
	puts("");
	return 0;
}