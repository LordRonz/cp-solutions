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
	int t;
	char s[200005];
	scanf("%d", &t);
	while(t--) {
		scanf("\n%s", s);
		int conseL = 0;
		int mxconseL = 0;
		for(int i = 0; s[i] != '\0'; ++i) {
			if(s[i] == 'L') ++conseL;
			else conseL = 0;
			mxconseL = max(mxconseL, conseL);
		}
		printf("%d\n", mxconseL + 1);
	}
	return 0;
}