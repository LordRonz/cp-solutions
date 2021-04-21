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
	int n;
	char s[60];
	scanf("%d\n%s", &n, s);
	for(int i = 0, j = 0; i < n; ++j, i+= j) {
		printf("%c", s[i]);
	}
	puts("");
	return 0;
}