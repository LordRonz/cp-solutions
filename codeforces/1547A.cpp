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
    int t, a[2], b[2], f[2];
    scanf("%d", &t);
    while(t--) {
        scanf("\n");
        scanf("%d %d %d %d %d %d", a, a + 1, b, b + 1, f, f + 1);
        int d = abs(a[0] - b[0]) + abs(a[1] - b[1]);
        if((a[0] == b[0] && a[0] == f[0]) || (a[1] == b[1] && a[1] == f[1])) {
            if((f[0] < max(a[0], b[0]) && f[0] > min(a[0], b[0])) || (f[1] < max(a[1], b[1]) && f[1] > min(a[1], b[1]))) {
                d += 2;
            }
        }
        printf("%d\n", d);
    }
	return 0;
}