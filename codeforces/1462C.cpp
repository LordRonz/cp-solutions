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
	int t, x;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &x);
		vector<int> ans;
		int sum = 0, last = 9;
		while (sum < x && last > 0) {
			ans.push_back(min(x - sum, last));
			sum += last;
			--last;
        }
		if(sum < x) {
			puts("-1");
			continue;
		}
		for(int i = ans.size() - 1; i >= 0; --i) {
			printf("%d", ans[i]);
		}
		puts("");
	}
	return 0;
}