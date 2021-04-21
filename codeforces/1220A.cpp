#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(x, a, b) for(int x = a; x < b; ++x)
typedef pair<int, int> pii;
//0xACCE97ED;

int main() {
	int q, z{}, e{}, r{}, o{}, n{}, zero{}, one{};
	char s[100005];
	scanf("%d\n", &q);
	scanf("%s", s);
	for(int i = 0; s[i] != '\0'; ++i) {
		switch(s[i]) {
			case 'z':
				++z;
				break;
			case 'e':
				++e;
				break;
			case 'r':
				++r;
				break;
			case 'o':
				++o;
				break;
			case 'n':
				++n;
				break;
		}
	}
	zero = min(MIN(z, e, r), o);
	z -= zero;
	e -= zero;
	r -= zero;
	o -= zero;
	one += MIN(o, n, e);
	while(one--) {
		fputs("1 ", stdout);
	}
	while(zero--) {
		fputs("0 ", stdout);
	}
	puts("");
	return 0;
}