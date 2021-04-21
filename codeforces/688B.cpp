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
	char n[100005];
	scanf("%s", n);
	printf("%s", n);
	for(int i = strlen(n) - 1; i >= 0; --i) {
		printf("%c", n[i]);
	}
	puts("");
	return 0;
}