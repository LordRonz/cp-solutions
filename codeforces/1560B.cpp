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
    int t, a, b, c;
    scanf("%d", &t);
    while(t--) {
        scanf("%d %d %d", &a, &b, &c);
        int diff = abs(a - b);
        if(a > diff * 2 || b > diff * 2 || c > diff * 2) {
            puts("-1");
            continue;
        }
        if(c + diff <= diff * 2) {
            printf("%d\n", c + diff);
        }
        else if(c - diff > 0 && c - diff <= diff * 2) {
            printf("%d\n", c - diff);
        }
        else puts("-1");
    }
	return 0;
}
