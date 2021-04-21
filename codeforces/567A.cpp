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
	int n, x[MAX_N];
	scanf("%d", &n);
	FOR(i, 0, n) {
		scanf("%d", &x[i]);
	}
	for(int i = 0; i < n; ++i) {
		int a = i > 0 ? abs(x[i] - x[i - 1]) : INT_MAX;
		int b = i < n - 1 ? abs(x[i] - x[i + 1]) : INT_MAX;
		int mn = min(a, b);
		a = i > 0 ? abs(x[i] - x[0]) : INT_MIN;
		b = i < n - 1 ? abs(x[i] - x[n - 1]) : INT_MIN;
		int mx = max(a, b);
		printf("%d %d\n", mn, mx);
	}
	return 0;
}