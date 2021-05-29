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
	ll a, b;
    int t;
	scanf("%d", &t);
	while(t--) {
		scanf("%lld %lld", &a, &b);
        if(b == 1) {
            puts("NO");
            continue;
        }
        ll x, y, z;
        x = a * (b - 1);
        y = a * b;
        z = x + y;
        puts("YES");
        printf("%lld %lld %lld\n", x, y, z);
	}
	return 0;
}