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

int main() {
	int n, a, b=0, c=0;
	scanf("%d", &n);
	while(n--) {
		scanf("%d", &a);
		if(a == 25) ++b;
		else if(a == 50) {
			if(b) --b;
			else break;
			++c;
		}
		else {
			if(c && b) {
				--c, --b;
			}
			else if(b > 2) {
				b -= 3;
			}
			else break;
		}
	}
	puts(n==-1?"YES":"NO");
	return 0;
}