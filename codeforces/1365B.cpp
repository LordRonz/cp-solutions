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
	int t, n, a[505], b[505];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		bool zer = 0, one = 0, sorted = 1;
		FOR(i, 0, n) {
			scanf("%d", &a[i]);
		}
		FOR(i, 0, n) {
			scanf("%d", &b[i]);
			if(b[i] == 1) one = 1;
			else zer = 1;
		}
		FOR(i, 0, n - 1) {
			if(a[i] > a[i + 1]) {
				sorted = 0;
				break;
			}
		}
		puts((zer && one) || sorted ? "YES" : "NO");
	}
	return 0;
}