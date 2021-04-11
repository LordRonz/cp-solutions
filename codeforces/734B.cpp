#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int k1, k2, k3, k4, res = 0;
	scanf("%d %d %d %d", &k1, &k2, &k3, &k4);
	int tmp = MIN(k1, k3, k4);
	k1 -= tmp;
	res += tmp * 256;
	tmp = min(k1, k2);
	res += tmp * 32;
	printf("%d\n", res);
	return 0;
}