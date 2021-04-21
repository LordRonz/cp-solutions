#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
typedef long long ll;
//0xACCE97ED;

int main() {
	ll t, n, k;
	scanf("%lld", &t);
	while(t--) {
		scanf("%lld %lld", &n, &k);
		ll tmp = 1;
		ll i = 3;
		ll j = 1;
		ll plus = 1;
		while(tmp < k) {
			tmp = (i * (i - 1)) / 2;
			if(((i + 100000) * (i + 99999)) / 2 < k) {
				plus = 100000;
			}
			else if(((i + 10000) * (i + 9999)) / 2 < k) {
				plus = 10000;
			}
			else if(((i + 100) * (i + 99)) / 2 < k) {
				plus = 100;
			}
			else plus = 1;
			i += plus;
			j += plus;
		}
		ll b1 = n - 1 - j; //correct
		ll b2 = (tmp - k) + 1 + b1;
		//printf("%d %d\n", b1, b2);
		for(int i = 0; i < n; ++i) {
			if(i == b1 || i == b2) {
				printf("b");
				continue;
			}
			printf("a");
		}
		puts("");
	}
	return 0;
}