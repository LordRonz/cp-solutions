#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int n, m, t;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &m);
		puts(n % m == 0 ? "YES" : "NO");
	}
	return 0;
}