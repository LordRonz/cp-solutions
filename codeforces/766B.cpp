#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define gcd __gcd
typedef pair<int, int> pii;
typedef long long ll;
typedef long double ld;
const int MAX_N = 1e5 + 1;
//0xACCE97ED;

int main() {
	int n, a[MAX_N];
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d", &a[i]);
	}
	sort(a, a + n);
	bool yes = 0;
	for(int i = 0; i < n - 2; ++i) {
		int b = a[i] + a[i + 1] + a[i + 2];
		int c = MAX(a[i], a[i + 1], a[i + 2]);
		if(b - c > c) {
			yes = 1;
			break;
		}
	}
	puts(yes ? "YES" : "NO");
	return 0;
}