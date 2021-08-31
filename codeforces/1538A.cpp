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
    int t, n, a[105];
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        for(int i = 0; i < n; ++i) {
            scanf("%d", &a[i]);
        }
        int maxI = 0, minI = 0, mx = -1, mn = INT_MAX, res = 0;
        for(int i = 0; i < n; ++i) {
            if(a[i] > mx) {
                mx = a[i];
                maxI = i;
            }
            if(a[i] < mn) {
                mn = a[i];
                minI = i;
            }
        }
        res = min(
            min(
                maxI + 1, n - maxI
            ) +
            min(
                minI + 1, n - minI
            ),
            min(
                max(minI, maxI) + 1,
                n - min(minI, maxI)
            )
        );
        printf("%d\n", res);
    }
	return 0;
}