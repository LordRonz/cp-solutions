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

bool isSquare(int n)
{
    if (ceil((double)sqrt(n)) == floor((double)sqrt(n))) {
        return 1;
    }
    return 0;
}

int main() {
	int t, n;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &n);
		if(n & 1) {
			puts("NO");
			continue;
		}
		if(isSquare(n/2)) {
			puts("YES");
		}
		else if(n % 4 == 0 && isSquare(n/4)) {
			puts("YES");
		}
		else {
			puts("NO");
		}
	}
}