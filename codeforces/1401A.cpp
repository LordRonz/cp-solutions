#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int t, n, k;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d", &n, &k);
		if(n == k) {
			puts("0");
			continue;
		}
		if(k > n) {
			printf("%d\n", k - n);
			continue;
		}
		puts(!((k & 1) ^ (n & 1)) ? "0" : "1");
	}
	return 0;
}