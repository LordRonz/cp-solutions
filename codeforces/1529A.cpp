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
            scanf("%d", a + i);
        }
        sort(a, a + n);
        int cnt = 0;
        int key = 0;
        for(int i = 0; i < n; ++i) {
            if(!i) {
                key = a[i];
            }
            else if(key != a[i]) {
                break;
            }
            ++cnt;
        }
        printf("%d\n", n - cnt);
	}
	return 0;
}