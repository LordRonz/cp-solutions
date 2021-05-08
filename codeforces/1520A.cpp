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
	char s[55];
	bool memo[27] = {};
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		scanf("\n%s", s);
		bool yes = 1;
		for(int i = 0; i < 27; ++i) {
			memo[i] = 0;
		}
		for(int i = 0; i < n; ++i) {
			if(memo[s[i] - 'A']) { 
				yes = 0;
				break;
			}
			if(i > 0 && s[i] != s[i - 1]) {
				memo[s[i - 1] - 'A'] = 1;
			}
		}
		puts(yes ? "YES" : "NO");
	}
	return 0;
}