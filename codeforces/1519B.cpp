
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
	int t, n, m, k;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d", &n, &m, &k);
		int a = min(n, m) - 1;
		int b = min(n, m) * (max(n, m) - 1);
		puts((a + b) == k ? "YES" : "NO");
	}
	return 0;
}