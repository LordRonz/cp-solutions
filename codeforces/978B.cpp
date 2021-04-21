#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int n, xcnt = 0, res = 0;
	char s[105];
	scanf("%d\n", &n);
	scanf("%s", s);
	for(int i = 0; i < n; ++i) {
		if(s[i] == 'x') {
			++xcnt;
		}
		else {
			xcnt = 0;
		}
		if(xcnt > 2) ++res;
	}
	printf("%d\n", res);
	return 0;
}