#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int n;
	scanf("%d", &n);
	if(n & 1) {
		puts("-1");
		return 0;
	}
	for(int i = 2; i <= n; i += 2) {
		printf("%d %d ", i, i - 1);
	}
	puts("");
	return 0;
}