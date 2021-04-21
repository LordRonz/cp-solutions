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
	int n, b[5005];
	pii a[5005];
	scanf("%d", &n);
	for(int i = 0; i < n; ++i) {
		scanf("%d %d", &a[i].first, &a[i].second);
		b[i] = a[i].second;
	}
	sort(a, a + n);
	sort(b, b + n);
	int lastDay = 0;
	for(int i = 0; i < n; ++i) {
		if(b[i] == a[i].second) {
			if(lastDay <= b[i]) {
				lastDay = b[i];
			}
			else lastDay = a[i].first;
		}
		else {
			lastDay = a[i].first;
		}
	}
	printf("%d\n", lastDay);
	return 0;
}