#include <bits/stdc++.h>

using namespace std;
#define MAX(a,b,c) max(a,max(b,c))
#define MIN(a,b,c) min(a,min(b,c))
#define MP make_pair
#define FOR(i, a, b) for(int i = a; i < b; ++i)
#define gcd __gcd
typedef pair<int, int> pii;
typedef long long ll;
typedef long double ld;
const int MAX_N = 1e5 + 1;
//0xACCE97ED;

int main() {
    int t, k, x, memo[1000];
    scanf("%d", &t);
    for(int i = 0, j = 1; i < 1000; ++i, ++j) {
        while(j % 3 == 0 || j % 10 == 3) ++j;
        memo[i] = j;
    }
    while(t--) {
        scanf("%d", &k);
        printf("%d\n", memo[k - 1]);
    }
	return 0;
}