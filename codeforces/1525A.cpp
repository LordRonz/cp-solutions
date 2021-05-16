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
	int t, k;
	scanf("%d", &t);
	while(t--) {
		scanf("%d", &k);
		int factor[] = {100, 50, 25, 20, 10, 5, 4, 2, 1};
		bool yes = 0;
		for(int i = 0; i < 9; ++i) {
			if(k % factor[i] == 0) {
				yes = 1;
				printf("%d\n", 100 / factor[i]);
				break;
			}
			if((100 - k) % factor[i] == 0) {
				yes = 1;
				printf("%d\n", 100 / factor[i]);
				break;
			}
		}
		if(!yes)
			puts("100");
	}
	return 0;
}