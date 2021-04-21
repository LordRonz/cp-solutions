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
		if(n == 1) {
			puts("0");
			continue;
		}
		if(n == 2) {
			puts("1");
			continue;
		}
		if(n & 1 && n != 3) {
			puts("3");
		} else {
			puts("2");
		}
	}
	return 0;
}