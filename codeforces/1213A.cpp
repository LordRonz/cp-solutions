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
	int n, x[105],res = INT_MAX;
	set<int> h;
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &x[i]);
		h.insert(x[i]);
	}

	for(auto& i: h) {
		int tmp = 0;
		for(int j = 0; j < n; ++j) {
			if(x[j] != i) {
				if(abs(x[j] - i) & 1) ++tmp;
			}
		}
		res = min(res, tmp);
	}
	printf("%d\n", res);
	return 0;
}