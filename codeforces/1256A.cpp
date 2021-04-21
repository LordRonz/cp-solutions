#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
typedef pair<int, int> pii;
typedef long long ll;
//0xACCE97ED;

int main() {
	int t, a, b, n, s;
	scanf("%d", &t);
	while(t--) {
		scanf("%d %d %d %d", &a, &b, &n, &s);
		int sn = s / n;
		if(sn <= a) {
			a -= sn;
			s -= sn * n;
		}
		else {
			s -= a * n;
		}
		puts(s > b ? "NO" : "YES");
	}
	return 0;
}