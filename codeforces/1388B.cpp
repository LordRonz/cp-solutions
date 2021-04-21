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
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		int tot8 = ceil(n / 4.f);
		for(int i = 0; i < n - tot8; ++i) {
			printf("9");
		}
		for(int i = 0; i < tot8; ++i) {
			printf("8");
		}
		puts("");
	}
	return 0;
}