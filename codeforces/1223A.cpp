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
	int q, n;
	scanf("%d", &q);
	while(q--) {
		scanf("%d", &n);
		if(n == 2) {
			puts("2");
			continue;
		}
		puts(n & 1 ? "1" : "0");
	}
	return 0;
}