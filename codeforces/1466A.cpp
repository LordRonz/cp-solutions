#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
typedef pair<int, int> pii;
typedef long long ll;
//0xACCE97ED;

int main() {
	int t, n, x[53];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &x[i]);
		}
		set<int> res;
		for(int i = 0; i < n - 1; ++i) {
			for(int j = i + 1; j < n; ++j) {
				if(abs(x[i] - x[j]) != 0) {
					res.insert(abs(x[i] - x[j]));
				}
			}
		}
		printf("%ld\n", res.size());
	}
	return 0;
}