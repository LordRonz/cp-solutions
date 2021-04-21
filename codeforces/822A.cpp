#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int a, b;
	scanf("%d %d", &a, &b);
	a = min(a, b);
	b = 1;
	for(;a; --a) {
		b *= a;
	}
	printf("%d\n", b);
	return 0;
}