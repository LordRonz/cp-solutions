#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int t;
	char s[105];
	scanf("%d", &t);
	while(t--) {
		scanf("\n%s", s);
		int res = 0;
		int zeroCnt = 0;
		bool one = false;
		for(int i = 0; s[i] != '\0'; ++i) {
			if(s[i] == '1') {
				one = true;
				if(zeroCnt > 0) {
					res += zeroCnt;
					zeroCnt = 0;
				}
			}
			if(s[i] == '0' && one) {
				++zeroCnt;
			}
		}
		printf("%d\n", res);
	}
	return 0;
}