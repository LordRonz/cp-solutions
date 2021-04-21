#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	long long n, x, d, tot, dis = 0;
	char c;
	scanf("%lld %lld", &n, &x);
	tot = x;
	FOR(i, 0, n) {
		scanf("\n%c", &c);
		scanf("%lld", &d);
		if(c == '+') {
			tot += d;
		}
		else {
			if(tot >= d) {
				tot -= d;
			}
			else ++dis;
		}
	}
	printf("%lld %lld\n", tot, dis);
	return 0;
}