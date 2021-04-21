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
	int n, a[100005], p[100005];
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d %d", &a[i], &p[i]);
	}
	int cheapest = INT_MAX;
	int res = 0;
	for(int i = 0; i < n; ++i) {
		if(p[i] < cheapest) cheapest = p[i];
		res += cheapest * a[i];
	}
	printf("%d\n", res);
	return 0;
}