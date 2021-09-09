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
    int t, n, a[55];
    scanf("%d", &t);
    while(t--) {
        int sum = 0;
        scanf("%d", &n);
        for(int i = 0; i < n; ++i) {
            scanf("%d", a + i);
            sum += *(a + i);
        }
        if(sum == n) {
            puts("0");
            continue;
        }
        if(sum > n) {
            printf("%d\n", sum - n);
            continue;
        }
        puts("1");
    }
	return 0;
}
