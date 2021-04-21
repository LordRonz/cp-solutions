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
	int t, n, a[5005];
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		for(int i = 0; i < n; ++i) {
			scanf("%d", &a[i]);
		}
		bool yes = 0;
		for(int i = 0; i < n - 2; ++i) {
			for(int j = i + 2; j < n; ++j) {
				if(a[i] == a[j]) {
					yes = true;
					break;
				}
			}
			if(yes) break;
		}
		puts(yes ? "YES" : "NO");
	}
	return 0;
}