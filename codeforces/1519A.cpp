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
	int t, r, b, d;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d", &r, &b, &d);
		int mx = max(r, b), mn = min(r, b);
		int a = mx / mn + (mx % mn ? 1 : 0);
		int dif = abs(a - 1);
		puts(dif > d ? "NO": "YES");
	}
	return 0;
}