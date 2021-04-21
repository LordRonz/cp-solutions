#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int n, res = 0;
	scanf("%d", &n);
	for(int i = 1, j = n - 1; i < n && j > 0; ++i, --j) {
		res += i * j;
	}
	printf("%d\n", res + n);
	return 0;
}