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
    int t;
    scanf("%d", &t);
    while(t--) {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        int m = MAX(a, b, c);
        int mc = (m == a) + (m == b) + (m == c);
        printf("%d %d %d\n", m - a + (m == a && a && mc == 1 ? 0 : 1), m - b + (m == b && b && mc == 1 ? 0 : 1), m - c + (m == c && c && mc == 1 ? 0 : 1));
    }
	return 0;
}
