#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int t, s;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &s);
		int res = 0, tmp;
		while(s / 10) {
			tmp = s / 10;
			res += tmp * 10;
			s -= tmp * 10;
			s += tmp;
		}
		res += s;
		printf("%d\n", res);
	}
	return 0;
}