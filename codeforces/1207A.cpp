#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define gcd __gcd
typedef pair<int, int> pii;
typedef long long ll;
typedef long double ld;
const int MAX_N = 1e5 + 1;
//0xACCE97ED;

int main() {
	int t, b, p, f, h, c;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d", &b, &p, &f);
		scanf("%d %d", &h, &c);
		b >>= 1;
		int res = 0;
		if(h > c) {
			int mn = min(b, p);
			res += mn * h;
			b -= mn;
			p -= mn;
		}
		else {
			int mn = min(b, f);
			res += mn * c;
			b -= mn;
			f -= mn;
		}
		res += min(b, p) * h + min(b, f) * c;
		printf("%d\n", res);
	}
	return 0;
}