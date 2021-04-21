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
		printf("%ld\n", strlen(s));
	}
	return 0;
}