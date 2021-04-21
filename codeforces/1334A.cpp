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
	int t, n, p, c;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		bool yes = 1;
		int pprev = INT_MIN, cprev = INT_MIN;
		for(int i = 0; i < n; ++i) {
			scanf("%d %d", &p, &c);
			if(pprev > p) yes = 0;
			if(cprev > c) yes = 0;
			if(c > p) yes = 0;
			if(c - cprev > p - pprev) yes = 0;
			pprev = p;
			cprev = c;
		}
		puts(yes ? "YES" : "NO");
	}
	return 0;
}