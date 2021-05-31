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
    int t;
    ll n;
	scanf("%d", &t);
	while(t--) {
		scanf("%lld", &n);
        if(n % 2050 != 0) {
            puts("-1");
            continue;
        }
        ll a = n / 2050;
        int res = 0;
        for(char &c: to_string(a)) {
            res += c - '0';
        }
        printf("%d\n", res);
	}
	return 0;
}