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
    int t, a, b, c, d;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d %d", &a, &b, &c, &d);
        int mxa = max(a, b), mna = min(a, b), mxc = max(c, d), mnc = min(c, d);
        puts(mxa > mna && mxa > mnc && mxc > mna && mxc > mnc ? "YES" : "NO");
	}
	return 0;
}