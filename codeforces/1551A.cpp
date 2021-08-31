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
    int n, t, c1, c2;
    scanf("%d", &t);
    for(int i = 0; i < t; ++i) {
        scanf("%d", &n);
        c1 = n / 3;
        c2 = n / 3;
        if(n % 3 == 2)
            ++c2;
        else if(n % 3 == 1)
            ++c1;
        printf("%d %d\n", c1, c2);
    }
	return 0;
}