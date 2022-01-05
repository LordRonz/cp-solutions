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
    int t, n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        if (n & 1) {
            printf("3 1 2");
            for (int i = 5; i <= n; i += 2) {
                printf(" %d %d", i, i - 1);
            }
        } else {
            for (int i = 2; i <= n; i += 2) {
                printf("%d %d ", i, i - 1);
            }
        }
        puts("");
    }
	return 0;
}